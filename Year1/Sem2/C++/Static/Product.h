#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
    //put here the class declaration
    private:
        static int _totalItems;

        int _quantity;
        
        std::string _productName;
        
    public:

        Product(std::string name, int quantity);

        void sell(int quantity);

        static int getNumberOfItems();
};

#endif