/*Tsion Wondwossen, Yordanos Dereje and Yordanos Taye
DRB2102D
Online clothing customization shop
*/
#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <string>
using namespace std;

void entryMenu()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"select to start your journey"<<endl;
    cout<<"0. Get to know us"<<endl;
    cout<<"1. Male"<<endl;
    cout<<"2. Female"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void infoQuery()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"Have you ever been in a store and look at a piece of clothing where"<<endl<<" you wished they had your size?"<<endl;
    cout<<"Or maybe you like the fit but wished they have it in another color?"<<endl;
    cout<<"You remember that comfortable shirt that has an irritating pattern"<<endl<<" on it?"<<endl;
    cout<<"Or maybe want to buy that one jacket you've had for the past 10 years"<<endl<<" but the manufacturing company isn't there anymore?"<<endl;
    cout<<"Fear not dear customer. At Y2T, you have everything you will ever need. "<<endl<<"This is not just some online store."<<endl;
    cout<<"How are we different? We exist purely based on customization. We ask you"<<endl<<" for every possible alteration for your chosen item."<<endl;
    cout<<"You pay. We deliver to your door. Easy peasy lemon squeazy."<<endl;
    cout<<"Enjoy the ride."<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void MenuM()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"select your preference"<<endl;
    cout<<"1. Tops"<<endl;
    cout<<"2. Bottoms"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void topVariantsM()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"1. T shirt\t\t\t200birr"<<endl;
    cout<<"2. Collar shirt\t\t\t200birr"<<endl;
    cout<<"3. Blouse\t\t\t300birr"<<endl;
    cout<<"4. cardigan\t\t\t300birr"<<endl;
    cout<<"5. Sweater\t\t\t300birr"<<endl;
    cout<<"6. Zip up sweatshirt\t\t500birr"<<endl;
    cout<<"7. Solid sweatshirt\t\t500birr"<<endl;
    cout<<"8. Track top\t\t\t500birr"<<endl;
    cout<<"9. Denim jacket\t\t\t600birr"<<endl;
    cout<<"10. Casual Jacket\t\t600birr"<<endl;
    cout<<"11. Leather jacket\t\t600birr"<<endl;
    cout<<"12. Blazer jacket\t\t600birr"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void bottomVariantsM()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"1. Cargo pants\t\t\t500birr"<<endl;
    cout<<"2. Normal Sweatpants\t\t500birr"<<endl;
    cout<<"3. Draw string Sweatpants\t500birr"<<endl;
    cout<<"4. Khaki pants\t\t\t500birr"<<endl;
    cout<<"5. Track pants\t\t\t500birr"<<endl;
    cout<<"6. Normal Jeans\t\t\t600birr"<<endl;
    cout<<"7. Ripped Jeans\t\t\t600birr"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void MenuF()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"select your preference"<<endl;
    cout<<"1. Tops"<<endl;
    cout<<"2. Bottoms"<<endl;
    cout<<"3. Dresses"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void topVariantsF()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"1. T shirt\t\t\t200birr"<<endl;
    cout<<"2. crop top\t\t\t200birr"<<endl;
    cout<<"3. Body-con\t\t\t200birr"<<endl;
    cout<<"4. Blouse\t\t\t300birr"<<endl;
    cout<<"5. Cardigan\t\t\t300birr"<<endl;
    cout<<"6. Sweater\t\t\t300birr"<<endl;
    cout<<"7. crochet sweater\t\t350birr"<<endl;
    cout<<"8. crochet cardigan\t\t350birr"<<endl;
    cout<<"9. crop sweatshirt\t\t350birr"<<endl;
    cout<<"10. Zip up sweatshirt\t\t500birr"<<endl;
    cout<<"11. Solid sweatshirt\t\t500birr"<<endl;
    cout<<"12. Denim jacket\t\t500birr"<<endl;
    cout<<"13. Track top\t\t\t500birr"<<endl;
    cout<<"14. Leather jacket\t\t600birr"<<endl;
    cout<<"15. Blazer jacket\t\t600birr"<<endl;
    cout<<"16. Casual Jacket\t\t600birr"<<endl;
    cout<<"***************************************************************************************"<<endl;

}
void bottomVariantsF()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"1. Cotton shorts\t\t200birr"<<endl;
    cout<<"2. Biker shorts\t\t\t300birr"<<endl;
    cout<<"3. Legging\t\t\t400birr"<<endl;
    cout<<"4. Pleated skirt\t\t400birr"<<endl;
    cout<<"5. Denim skirt\t\t\t450birr"<<endl;
    cout<<"6. Denim shorts\t\t\t450birr"<<endl;
    cout<<"7. Cargo pants\t\t\t500birr"<<endl;
    cout<<"8. Normal Sweatpants\t\t500birr"<<endl;
    cout<<"9. Draw string Sweatpants\t500birr"<<endl;
    cout<<"10. Khaki pants\t\t\t500birr"<<endl;
    cout<<"11. Track pants\t\t\t500birr"<<endl;
    cout<<"12. Skinny Jeans\t\t600birr"<<endl;
    cout<<"13. Ripped Jeans\t\t600birr"<<endl;
    cout<<"14. Mom jeans\t\t\t600birr"<<endl;
    cout<<"15. Latex pants\t\t\t600birr"<<endl;
    cout<<"16. Leather pants\t\t600birr"<<endl;

    cout<<"***************************************************************************************"<<endl;

}
void dressVariants()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"1. Body-con\t\t\t500birr"<<endl;
    cout<<"2. Flowy dress\t\t\t500birr"<<endl;
    cout<<"3. A-line\t\t\t500birr"<<endl;
    cout<<"4. Belted\t\t\t600birr"<<endl;
    cout<<"5. Wrap dress\t\t\t600birr"<<endl;
    cout<<"6. Button-up\t\t\t650birr"<<endl;
    cout<<"7. Pleated\t\t\t650birr"<<endl;
    cout<<"8. Knitted\t\t\t800birr"<<endl;
    cout<<"9. Denim Dress\t\t\t800birr"<<endl;
    cout<<"10. Leather Dress\t\t800birr"<<endl;
    cout<<"11. Latex Dress\t\t\t800birr"<<endl;
    cout<<"12. Blazer Dress\t\t800birr"<<endl;
    cout<<"***************************************************************************************"<<endl;

}
void sizePrefer()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"select your compatible size from the following"<<endl;
    cout<<"xxs,xs,s,m,l,xl,xxl "<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void patternPrefer()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"select from the following pattern variations"<<endl;
    cout<<"solid, plaid, stripe, marble"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void Users_address(char houseNumber[10],char street[60],char subcity[60],char city[60], char country[60])
{
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"Your confirmed dropoff location is "<< houseNumber <<", "<< street <<", "<<subcity<<", "<<city<<", "<<country<<endl;
    cout<<"***********************************************************************************************************"<<endl;
}
void paymentOfferings()
{
    cout<<"***************************************************************************************"<<endl;
    cout<<"Payment Methods"<<endl;
    cout<<"1. Cash on Delivery"<<endl;
    cout<<"2. Credit Card"<<endl;
    cout<<"3. Debit card"<<endl;
    cout<<"***************************************************************************************"<<endl;
}
void topF(int topVarF)
{
    double price=0.00;
            if(topVarF==1 || topVarF==2 || topVarF==3)
                price+=200.00;
            else if(topVarF==4 || topVarF==5 || topVarF==6)
                price+=300.00;
            else if(topVarF==7 || topVarF==8 || topVarF==9)
                price+=350.00;
            else if(topVarF==10 || topVarF==11 || topVarF==12 || topVarF==13)
                price+=500.00;
            else
                price+=600.00;
}
int main()
{
    int mainMenu,menuMale, menuFemale,i,topVarM,bottomVarM,topVarF,bottomVarF,dressVar,item=0,distLoc,delDate;
    int paymentMethod,credcard[16],*ccn=credcard,credcardpin[4],*ccp=credcardpin,debitcard[16],*dcn=debitcard,debitcardpin[4],*dcp=debitcardpin;
    int phonenumber[12],*phonenum=phonenumber,otp[5],*otpp=otp;

    double price=0.00,deliveryCost;

    char another,recipentName[100],country[60],city[60],subcity[60],street[60],houseNumber[10],confirmation;

    string sizeChoice,patternChoice,colorChoice;

    do{
    entryMenu();
    do{
    cout<<"Option: ";
    cin>>mainMenu;
    if(mainMenu<0 || mainMenu>2)
                cout<<"Error. Out of range."<<endl;
    }while(mainMenu<0 || mainMenu>2);
    switch(mainMenu)
    {
    case 0:
        infoQuery();
        break;
    case 1:
        cout<<"You have chosen the men's section."<<endl;
        MenuM();

        do{
            cout<<"Option: ";
            cin>>menuMale;
            if(menuMale!=1 && menuMale!=2)
                cout<<"Error. Out of range."<<endl;
        }while(menuMale!=1 && menuMale!=2);
        switch(menuMale)
        {
        case 1:
            topVariantsM();
            do{
            cout<<"Choice: ";
            cin>>topVarM;
            if(topVarM<1 ||topVarM>12)
                cout<<"Out of range.";
            }while(topVarM<1 ||topVarM>12);
            if(topVarM==1 || topVarM==2)
                price+=200.00;
            else if(topVarM==3 || topVarM==4 || topVarM==5)
                price+=300.00;
            else if(topVarM==6 || topVarM==7 || topVarM==8)
                price+=500.00;
            else
                price+=600.00;
            sizePrefer();
            cout<<"Size: ";
            do{
            cin>>sizeChoice;
            if(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl")
                cout<<"Size entered doesn't exist. Rewrite again."<<endl;
            }while(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl");
            patternPrefer();
            cout<<"Pattern: ";
            do{cin>>patternChoice;
            if(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble")
            cout<<"Pattern entered not available. Rewrite again."<<endl;
            }while(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble");
            cout<<"Insert your choice of color: ";
            cin>>colorChoice;
            item+=1;

            break;
        case 2:
            bottomVariantsM();
            do{
            cout<<"Choice: ";
            cin>>bottomVarM;
            if(bottomVarM<1 ||bottomVarM>7)
                cout<<"Out of range.";
            }while(bottomVarM<1 ||bottomVarM>7);
            if(bottomVarM==6 || bottomVarM==7)
                price+=600.00;
            else
                price+=500.00;
            sizePrefer();
            cout<<"Size: ";
            do{
            cin>>sizeChoice;
            if(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl")
                cout<<"Size entered doesn't exist. Rewrite again."<<endl;
            }while(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl");
            patternPrefer();
            cout<<"Pattern: ";
            do{cin>>patternChoice;
            if(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble")
            cout<<"Pattern entered not available. Rewrite again."<<endl;
            }while(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble");
            cout<<"Insert your choice of color: ";
            cin>>colorChoice;
            item+=1;
            break;
        }
        break;

    case 2:
        cout<<"You have chosen the women's section."<<endl;
        MenuF();

        do{
            cout<<"Option: ";
            cin>>menuFemale;
            if(menuFemale!=0 && menuFemale!=1 && menuFemale!=2 && menuFemale!=3)
                cout<<"Error. Out of range."<<endl;
        }while(menuFemale!=0 && menuFemale!=1 && menuFemale!=2 && menuFemale!=3);
        switch(menuFemale)
        {
        case 1:
            topVariantsF();
            do{
            cout<<"Choice: ";
            cin>>topVarF;
            if(topVarF<1 ||topVarF>16)
                cout<<"Out of range.";
            }while(topVarF<1 ||topVarF>16);
            topF(topVarF);
            sizePrefer();
            cout<<"Size: ";
            do{
            cin>>sizeChoice;
            if(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl")
                cout<<"Size entered doesn't exist. Rewrite again."<<endl;
            }while(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl");
            patternPrefer();
            cout<<"Pattern: ";
            do{cin>>patternChoice;
            if(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble")
            cout<<"Pattern entered not available. Rewrite again."<<endl;
            }while(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble");
            cout<<"Insert your choice of color: ";
            cin>>colorChoice;
            item+=1;
            break;
        case 2:
            bottomVariantsF();
            do{
            cout<<"Choice: ";
            cin>>bottomVarF;
            if(bottomVarF<1 ||bottomVarF>16)
                cout<<"Out of range.";
            }while(bottomVarF<1 ||bottomVarF>16);
            if(bottomVarF==1)
                price+=200.00;
            else if(bottomVarF==2)
                price+=300.00;
            else if(bottomVarF==3 || bottomVarF==4)
                price+=400.00;
            else if(bottomVarF==5 || bottomVarF==6)
                price+=450.00;
            else if(bottomVarF==7 || bottomVarF==8 || bottomVarF==9 || bottomVarF==10 || bottomVarF==11)
                price+=500.00;
            else
                price+=600.00;
            sizePrefer();
            cout<<"Size: ";
            do{
            cin>>sizeChoice;
            if(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl")
                cout<<"Size entered doesn't exist. Rewrite again."<<endl;
            }while(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl");
            patternPrefer();
            cout<<"Pattern: ";
            do{
            cin>>patternChoice;
            if(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble")
            cout<<"Pattern entered not available. Rewrite again."<<endl;
            }while(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble");
            cout<<"Insert your choice of color: ";
            cin>>colorChoice;
            item+=1;
            break;
        case 3:
            dressVariants();
            do{
            cout<<"Choice: ";
            cin>>dressVar;
            if(dressVar<1 ||dressVar>12)
                cout<<"Out of range.";
            }while(dressVar<1 ||dressVar>12);
            if(dressVar==1 || dressVar==2 || dressVar==3)
                price+=500.00;
            else if(dressVar==4 || dressVar==5)
                price+=600.00;
            else if(dressVar==6 || dressVar==7)
                price+=650.00;
            else
                price+=800.00;
            sizePrefer();
            cout<<"Size: ";
            do{
            cin>>sizeChoice;
            if(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl")
                cout<<"Size entered doesn't exist. Rewrite again."<<endl;
            }while(sizeChoice!="xxs" && sizeChoice!="xs" && sizeChoice!="s" && sizeChoice!="m" && sizeChoice!="l" && sizeChoice!="xl" && sizeChoice!="xxl");
            patternPrefer();
            cout<<"Pattern: ";
            do{cin>>patternChoice;
            if(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble")
            cout<<"Pattern entered not available. Rewrite again."<<endl;
            }while(patternChoice!="solid" && patternChoice!="plaid" && patternChoice!="stripe" && patternChoice!="marble");
            cout<<"Insert your choice of color: ";
            cin>>colorChoice;
            item+=1;
            break;

        }
        break;
    }
    cout<<endl<<"Do you want to go another round(Y or y for yes, any other key for no): ";
    cin>>another;
    system("cls");
    }while(another=='Y' || another=='y');
    if(mainMenu==1 || mainMenu==2)
    {
    cout<<"***************************************************************************************"<<endl;
     cout<<"Your total price rings up at "<<price<<" birr."<<endl;
    cout<<"Recipents name: ";
    cin.ignore(1,'\n');
    cin.getline(recipentName,99,'\n');
    cout<<"Country: ";

    cin.getline(country,59,'\n');
    cout<<"City: ";

    cin.getline(city,59,'\n');
    cout<<"Sub-city: ";

    cin.getline(subcity,59,'\n');
    cout<<"Street: ";

    cin.getline(street,59,'\n');
    cout<<"House Number: ";

    cin>>houseNumber;

    Users_address(houseNumber,street,subcity,city,country);

cout<<"***************************************************************************************"<<endl;
    srand(time(0));
    distLoc=rand()%1000;
    cout<<"Estimated distance between store and drop-off location (in km) is "<<distLoc<<endl;
   if(distLoc>0 && distLoc<=50)
   {
       deliveryCost=0.00;
       delDate=3;
   }
   else if(distLoc<=200)
   {
       deliveryCost=price*0.10;
       delDate=5;
   }
   else if(distLoc<=500)
   {
       deliveryCost=price*0.25;
       delDate=10;
   }
   else
    {
        deliveryCost=price*0.50;
       delDate=25;
    }
   price+=deliveryCost;
    cout<<endl<<"Number of items purchased: "<<item<<endl;
    cout<<"Estimated delivery in "<<delDate<<" days."<<endl;
    cout<<"Your delivery cost rings up at "<<deliveryCost<<" birr."<<endl;
    cout<<"***************************************************************************************"<<endl<<endl;
    cout<<"Total price is "<<price<<" birr."<<endl<<endl;
    cout<<"***************************************************************************************"<<endl;

    paymentOfferings();
    cout<<"Choice: ";
    do{
        cin>>paymentMethod;
        if(paymentMethod!=1 && paymentMethod!=2 && paymentMethod!=3)
            cout<<"Invalid choice. Please reenter."<<endl;
    }while(paymentMethod!=1 && paymentMethod!=2 && paymentMethod!=3);

    if(paymentMethod==1)
    {
        cout<<"***************************************************************************************"<<endl;
        cout<<"You have chosen the cash on delivery."<<endl;
        cout<<"Please check that everything has arrived before making payment"<<endl;
        cout<<"***************************************************************************************"<<endl;
    }
    else if(paymentMethod==2)
    {
        cout<<"***************************************************************************************"<<endl;
        cout<<"You have chosen the credit card option."<<endl;
        cout<<"Please enter your credit card number(16-digits): "<<endl;
        for(i=0;i<16;i++)
            cin>>*(ccn+i);
        cout<<"Please enter your pin number(4-digits): "<<endl;
        for(i=0;i<4;i++){
            getchar();
            cin>>*(ccp+i);
        }
        cout<<"***************************************************************************************"<<endl;
        cout<<"A 5 digit One Time Password(OTP) has been sent to your phone number."<<endl;
        cout<<"Please enter the OTP: ";
        for(i=0;i<5;i++)
        {
            getchar();
            cin>>*(otpp+i);
        }
        cout<<"***************************************************************************************"<<endl;
    }
    else
    {
        cout<<"***************************************************************************************"<<endl;
        cout<<"You have chosen the debit card option."<<endl;
        cout<<"Please enter your debit card number(16-digits): "<<endl;
        for(i=0;i<16;i++)
            cin>>*(dcn+i);
        cout<<"Please enter your pin number(4-digits): "<<endl;
        for(i=0;i<4;i++)
        {
            getchar();
            cin>>*(dcp+i);
        }
        cout<<"***************************************************************************************"<<endl;
        cout<<"A 5 digit One Time Password(OTP) has been sent to your phone number."<<endl;
        cout<<"Please enter the OTP(5-digits): ";
        for(i=0;i<5;i++)
        {
            getchar();
            cin>>*(otpp+i);
        }
        cout<<"***************************************************************************************"<<endl;

    }
    cout<<"***************************************************************************************"<<endl;
    cout<<"Confirmed."<<endl<<"Thank you for shopping at Y2T"<<endl;
    cout<<"***************************************************************************************"<<endl;
    }

    return 0;
}
