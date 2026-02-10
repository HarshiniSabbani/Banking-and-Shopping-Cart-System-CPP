class Shopping;
typedef struct address
{
        string houseno,street,city,state;
        int pincode;


}address;

class Bank
{
        int accountNo;
        float balance;
        string name;
        string password;
        address ad;
        string email;
        static int cnt1;
        void setPassword();

        bool verifyPassword();
        friend class Shopping;
        public:
             Bank();
            void deposit();
            void withdraw();
            void balEnq();
            void menu(Shopping &);
};

int Bank::cnt1=12345;