void Bank:: setPassword()
        {
                cout<<"set the password"<<endl;
                cin>>password;
        }
bool Bank:: verifyPassword()
        {
                string pswd;
                cout<<"enter password for bank account:";
                cin>>pswd;
                if(pswd==password)
                {
                        return true;
                }
                else
                {
                        return false;

                }

        }

Bank:: Bank()
             {
                    cout<<"enter the name"<<endl;
                    cin>>name;
                    cout<<"emter the minimum balance"<<endl;
                    cin>>balance;
                    accountNo=cnt1++;
                    cout<<"enter the address"<<endl;
                    cout<<"enter the house no"<<endl;
                    cin>>ad.houseno;
                     cout<<"enter the street"<<endl;
                     cin>>ad.street;
                     cout<<"enter the city"<<endl;
                     cin>>ad.city;
                     cout<<"enter the state"<<endl;
                     cin>>ad.state;
                     cout<<"enter the pincode"<<endl;
                     cin>>ad.pincode;
                    setPassword();
                    cout<<"enter the emaik"<<endl;
                    cin>>email;

            }
void Bank :: deposit()
            {
                    float amt;
                    cout<<"enter the amount  to be deosited"<<endl;
                    cin>>amt;
                    if(verifyPassword())
                    {
                            balance+=amt;

                    }
                    else
                    {
                            cout<<"INVALID PASSWORD"<<endl;
                    }
            }
            void Bank:: withdraw()
            {
                    float sum;
                    cout<<"enter the amount to lbe withdraw"<<endl;
                    cin>>sum;
                    if(verifyPassword())
                    {
                            if(sum>balance)
                            {
                                    cout<<"INSUFFICIENT BALANCE"<<endl;
                            }
                            else
                            {
                                    balance-=sum;

                            }


                    }
                    else
                    {
                            cout<<"INVALID PIN"<<endl;

                    }
            }
            void Bank:: balEnq()
            {
                    if(verifyPassword())
                    {
                           cout<<"BALANCE AVAILABLE:"<<balance<<endl;
                    }
            }
            void Bank::menu(Shopping &obj)
            {
                    cout<<"Welcome to the Bank and Shopping system"<<endl;
                    while(1)
                    {
                    cout<<"----Bank Menu-----"<<endl;
  cout<<"1.Deposit 2.Withdraw 3.BalanceEnquiry  4.proceed to shopping 5:Exit"<<endl;

                   int n;
                   cout<<"enter the choice"<<endl;
                   cin>>n;
                   switch(n)
                   {
                           case 1:deposit();
                                  break;
                           case 2:withdraw();
                                       break;
                           case 3:balEnq();
                                        break;
                          // case 5:return;
                           case 4://Shopping s;
                                 obj. menu(*this);
                                   break;
                           case 5:return;

                   }

            }
            }
//       friend class Shopping;


        void Shopping ::menu(Bank &obj)
        {
                cout<<"-----shop menu----"<<endl;
                int ch,flag=0;

                cout<<"MENU OTIONS"<<endl;
           //     cout<<"1: ADD 2: VIEW 3:DELETE 4.Billing 5.exit"<<endl;
                cnt=-1;
                               totalitems=0,totalAmount=0;
                while(1){
                //      flag=0;

                cout<<"1: ADD 2: VIEW 3:DELETE 4.Billing 5>exit"<<endl;
                        cin>>ch;
                switch(ch)
                {
                       case 1: addToCart();
                               break;
                        case 2:viewCart();
                               break;
                        case 3:deleteItem();;
                               break;
                        case 4:billing(obj);
                               flag=1;
                               break;
                        case 5:return ;


                }
                if(flag==1)
                {
                        break;
                }
        }
        }
//      friend class Bank;
      void Shopping ::addToCart()
        {
                cnt++;
                cout<<"enter the product name"<<endl;
                cin>>str[cnt].name;
                cout<<"enter the price"<<endl;
                cin>>str[cnt].price;
                cout<<"enter the quantity"<<endl;
                cin>>str[cnt].quantity;
                //totalAmount+=(str[cnt].price)*
              //   cnt++;
                cout<<"item added successfully"<<endl;

                        totalAmount+=((str[cnt].price)*(str[cnt].quantity));

        }
        void  Shopping ::viewCart()
        {
                if(cnt==-1)
                {
                        cout<<"CART IS EMPTY"<<endl;
                }
                 cout<<"viewing Cart"<<endl;
                 for(int i=0;i<=cnt;i++)
                 {//(str[i].price)*(str[i].quantity);
                         cout<<i+1<<".";
                        cout<<str[i].name<<" | ";
                         cout<<str[i].price<<" | ";
                         cout<<str[i].quantity<<" | ";
                        cout<<"Total"<<((str[i].price)*(str[i].quantity))<<" \n";
                        //totalAmount+=((str[i].price)*(str[i].quantity));
                 }
                 cout<<"total amount:"<<totalAmount<<endl;
        }

        void Shopping ::deleteItem()
        {

                int i=0;
                cout<<"enter the item name to be deleted"<<endl;
                string data;
                cin>>data;
                int qty;
                cout<<"enter the quantity to be delted"<<endl;
                cin>>qty;
                for( i=0;i<cnt;i++)
                {
                        if(str[i].name==data)
                        {
                                break;
                        }
                }

                if(str[i].quantity==qty)
                {

                        totalAmount-=((str[i].quantity) * str[i].price);
                 //  memmove(str+i,str+i+1,(cnt-i-1)*sizeof(product));
                 for(i;i<=cnt-1;i++)
                 {
                         str[i]=str[i+1];
                 }
                cnt--;
                }
                else if(qty>str[i].quantity)
                {
                        cout<<"CANNOT BE REMOVED "<<endl;
                        return;
                }
                else
                {
                        str[i].quantity=str[i].quantity-qty;
                        totalAmount-=(qty*str[i].price);


                }
                //cnt--;
       }
void Shopping:: billing(Bank & b)
{
        if(totalAmount==0)
        {
        cout<<"CART IS EMPTY ADD THE PRODUCT "<<endl;
        return;
        }
        cout<<"Billing..."<<endl;

        if(b.verifyPassword())
        {
                if(b.balance>=totalAmount)
                {
                        b.balance=b.balance-totalAmount;
                        cout<<"Billing Successful! Amount deducted:"<<totalAmount<<endl;
                        cout<<"Remaining Bank Balance :"<<b.balance<<endl;
                        cout<<"Cart is now empty"<<endl;
                        cnt=0;

                }
                else
                {
                        cout<<"INSUCCICIENT BALANCE"<<endl;
                }
        }
        else
        {
                cout<<"INVALID PIN"<<endl;
        }
}