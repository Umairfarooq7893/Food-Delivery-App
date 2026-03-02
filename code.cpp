/*
    Author : Umair Farooq
    Program: Food Delivery App
*/
#include<iostream>
#include<vector>
using namespace std;

class Restaurant{
public:
//1. Restaurant
    string restaurant_Name;
    string location;
    int rating;
    vector<string>Items;
// Methods:
    void displayMenu(){

    }
    void addItem(){

    }
    void removeItem(){

    }

};
class Menu{
public:

//2. Menu
    string itemName;
    int price;
    string category; //Veg/Non-Veg/Drinks
//Methods:
    void displayItem(){

    }

};

class Order{
public:

//3. Order
    int orderId;
    vector<string> orderedItems;
    int totalAmount;
    string orderStatus;
//Methods:
    void addItemToOrder(){

   }
    void calculateTotal(){

    }
    void placeOrder(){

    }
};

class Delivery{
public:

//4. Delivery
    string deliveryPersonName;
    string deliveryAddress;
    float estimatedTime;
    string deliveryStatus;
//Methods:
    void assignDelivery(){

    }
    void updateStatus(){

    }

};

class User{
public:

//5. User Class
    int userId;
    string name;
    int phoneNumber;
    string ddress;
//Methods:
    void registerUser(){

    }
    void login(){

    }
    void updateProfile(){

    }

};

class Payment{
public:

// Payment Class
    int paymentId;

    string paymentMethod; //(Cash/Card/UPI)
    int amount;
    string paymentStatus;
//Methods:
    void processPayment(){

    }
    void verifyPayment(){

    }
};

class TrackingSystem{
public:

//7. Tracking System Class
    int orderId;
    string currentLocation;
    int estimatedArrivalTime;
    string trackingStatus;
//Methods:
    void updateLocation(){

}
    void showTrackingDetails(){

}

};
class RatingReviews{
public:

// 8. Ratings & Reviews Class
    int rating;
    string reviewText;
    string userName;
    string restaurantName;
//Methods
void submitReview(){

}
void displayReviews(){

}
};