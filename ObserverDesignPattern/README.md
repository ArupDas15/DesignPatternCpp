Video: https://www.youtube.com/watch?v=gbTWHeGUeXs&list=PLliXPok7ZonlZJuAN0hvUnf5ovFepjxU0&index=5

# Introduction to Observer Behavorial Design Pattern

The main motivation behind using the Observer Behavorial Design Pattern is, "Whenever there is a data change happening and a lot of people have to be notified for e.g. group messaging (a new message in a group should be notified to all the group members), a new message in Slack should be notified to the user in all the user logged-in devices." 

The concept is that there is a publisher publishing some change and a bunch of subscribers who have subscribed to the change. The observer behvorial design pattern will *define a subscription mechanism to notify multiple objects (subscribers) about any events (change) that happen to the object they’re observing*. Thus, there is a **SUBJECT** and **SEVERAL OBSERVERS**, who will be notified if any change happens to the SUBJECT by the mechanism (actions) defined using the observer behavorial design pattern.

![image](https://github.com/user-attachments/assets/d46ae8e5-051b-47cc-a74c-bd940faee085)
Image Source: https://refactoring.guru/design-patterns/observer

# How do I run the code and code output?

```
DesignPatternCpp\ObserverDesignPattern> g++ -o observer *.cpp
DesignPatternCpp\ObserverDesignPattern> ./observer
```

**OUTPUT**:
```
User 1 received msg new msg
User 2 received msg new msg
User 3 received msg new msg
User 2 received msg new new msg
User 3 received msg new new msg
```
