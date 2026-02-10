typedef struct product{
        string name;
        float price;
        int quantity;
}product;


class Shopping
{
        int cnt;//=0;
        product str[20];
        int totalitems;
        float totalAmount;
        public:
        friend  class Bank;
      // friend  void billing();

        void menu(Bank& );
        void addToCart();
        void viewCart();
        void billing(Bank & b);
        void deleteItem();
};
//int Shopping::cnt=0;