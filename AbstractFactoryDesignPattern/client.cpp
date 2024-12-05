#include <iostream>
#include <string>

using namespace std;

class IButton {
    public:
        virtual void press() = 0;
};

// First, we will define the product.
class MacButton : public IButton {
    public:
        void press() {
            cout<<"Mac button pressed."<<endl;
        }
};

class WinButton : public IButton {
    public:
        void press() {
            cout<<"Windows button pressed."<<endl;
        }
};

class ITextBox {
    public:
        virtual void showtext() = 0;
};

class MactextBox : public ITextBox {
    public:
        void showtext() {
            cout<<"Showing Mac TextBox.";
        }
};

class WintextBox : public ITextBox {
    public:
        void showtext() {
            cout<<"Showing Windows TextBox.";
        }
};

class IFactory {
    public:
        virtual IButton* CreateButton() = 0;
        virtual ITextBox* CreateTextBox() = 0;
};

// Now we will define the factory classes which will create and return the product.
class MacFactory : public IFactory {
    public:
        IButton* CreateButton() {
            return new MacButton();
        }
        ITextBox* CreateTextBox() {
            return new MactextBox();
        }
};

class WinFactory : public IFactory {
    public:
        IButton* CreateButton() {
            return new WinButton();
        }
        ITextBox* CreateTextBox() {
            return new WintextBox();
        }
};

// Now we will create the Abstract factory that will create the factory class objects. 
// These factory class objects will actually create and return the products. 
class GUIAbstractFactory {
    public:
        static IFactory* CreateFactory(string osType) {
            if (osType == "windows") {
                return new WinFactory();
            } else if (osType == "mac") {
                return new MacFactory();
            }
            return new MacFactory(); // default
        }
};

int main() {
    string osType;
    cout<<"Enter your machine OS "<<endl;
    cin>>osType;

    IFactory* fact = GUIAbstractFactory::CreateFactory(osType);
    
    IButton* button = fact->CreateButton();
    button->press();
    
    ITextBox* textBox = fact->CreateTextBox();
    textBox->showtext();

    return 0;
}