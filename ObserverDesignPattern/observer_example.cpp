// We are going to oberve the code from the client perspective
#include <iostream>
#include <list>
#include <string>

using namespace std;

class ISubscriber {
    // Class ISubscriber defines the interface for the Subscribers/Users
    public:
        // Class ISubscriber is an abstract class because of the presence of the pure virtual function.
        // Now any subclass which inherits the Class ISubscriber and desires to be a concrete class will have to provide the implementation of notify()
        // Depending on the type of subscriber, the actions taken by the notify() can differ. Thus, different subscribers can have different implementation logic for subscriber.
        virtual void notify(string msg) = 0;
};

class User : public ISubscriber {
    private:
        // We are going to distinguish between each user using the userId
        int userId;
    public:
        // Constructor to create a new user based on the userId passed as an argument.
        User(int userId) {
            // Note: We use the this pointer explicitly here to set the userId value of the current object, 
            // because the parameter userId and the member variable userId have the same name and 
            // the parameter name shadows the member variable. If the names were different, we wouldn't 
            // need to use the this pointer as the compiler would be able to distinguish between 
            // the member and the parameter automatically becuase no shadowing occurs. 
            // Implicitly, the compiler will use the this pointer to access member variables of the class. 
            // This is done automatically, and you do not need to write it out.
            this->userId = userId;
        }
        void notify(string msg) {
            cout<<"User "<<userId<<" received msg "<<msg<<endl;
        }
};

class Group {
    // This is the publisher class/subject.
    private:
        // We define an array field for storing a list of references to subscriber objects 
        // We are going to use pointer of interface class becuase the subscriber objects can be of different types (different classes) 
        list<ISubscriber*> users;
    public:
        // We create a public subsriber method so that the client can add subsribers to the list.
        void subscribe(ISubscriber* user) {
            users.push_back(user);
        }
        // We create a public unsubsriber method so that the client can remove subsribers from the list.
        void unsubscribe(ISubscriber* user) {
            users.remove(user);
        }
        void notify(string msg) {
            for (auto user : users) {
                //  Whenever an important event happens to the publisher, 
                // it goes over its subscribers and calls the specific notification method on their objects.
                user->notify(msg);
            }
        }
};

int main() {
    Group* group = new Group;
    // We define 3 users/subscribers.
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);
    // We subscribe/add the users to the group.
    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    // We will now notify the users in the group using notify() about any new message
    group->notify("new msg");
    // We will unsubsribe/remove user1 from the group and then send a new message to the group and observe the users who got notification regarding the new message.
    group->unsubscribe(user1);
    group->notify("new new msg");

    return 0;
}