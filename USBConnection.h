#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>

using namespace std;

class USBConnection{

    static stack<int> ids;

    private:

        int ID;

        USBConnection(int id){
            ID = id;
        }

    public:

        static USBConnection* CreateUsbConnection(){
            if (ids.size() > 0){
                int id = ids.top();
                ids.pop();
                return new USBConnection(id);
            }else{
                return nullptr;
            }
        }

        int get_id(){
            return ID;
        }

        ~USBConnection(){
            ids.push(this->ID);
        }

};

stack<int> USBConnection::ids({3, 2, 1});

#endif