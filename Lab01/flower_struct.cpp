#include <iostream>
#include <vector>
using namespace std;

int main (){

    struct address{
        char district[20];
        char province[20];
    };

    struct flower{
        int number;
        int price;
        char name[20];
        struct address flower_addr;
    };

    vector<flower> flow(3);

    for (int i = 0; i < 3; i++){
        cout << i + 1 << " Please enter flower name: ";
        scanf("%s", flow[i].name);

        cout << i + 1 << " Please enter flower number: ";
        scanf("%d", &flow[i].number);

        cout << i + 1 << " Please enter flower price: ";
        scanf("%d", &flow[i].price);

        cout << i + 1 << " Please enter flower province manufactor: ";
        scanf("%s", flow[i].flower_addr.province);

        cout << i + 1 << " Please enter flower district manufactor: ";
        scanf("%s", flow[i].flower_addr.district);

        cout << "\n";
    }

    for (int i = 0; i < 3; i++){
        cout << "Flower " << i + 1 << " name is: " << flow[i].name << endl;
        cout << "Flower " << i + 1 << " number is: " << flow[i].number << endl;
        cout << "Flower " << i + 1 << " price is: " << flow[i].price << endl;
        cout << "Flower " << i + 1 << " province manufactor is: " << flow[i].flower_addr.province << endl;
        cout << "Flower " << i + 1 << " district manufactor is: " << flow[i].flower_addr.district << endl;

        cout << "\n";
    }

    return 0;

}