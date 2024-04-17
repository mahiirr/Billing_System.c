#include<stdio.h>
int main()
{
    char name [50];
    int Customer_number;
    int customer_id;
    
    int body_soap, hair_cream, hair_spray, body_spray, face_wash;
    int sugar, coffee, tea, rice, wheat;
    int pepsi, coke, sprite, thumbs_up, mirinda;
    int total, cosmetic_total, grocery_total, beverage_total;
    
    printf("--------------\n");
    printf("BILLING SYSTEM\n");
    printf("--------------\n");
    printf("CUSTOMER DETAILS\n");
    
    printf("Customer Name: ");
    scanf("%s", &name); 
    printf("Customer Number: ");
    scanf("%d", &Customer_number); 
   do{
        printf("Customer Number(min 10 digits): ");
        scanf("%d", &Customer_number);
       if(Customer_number < 1  || Customer_number > 9999999999)
        {
            printf("Invalid input. Please Enter valid number betwwen 0 to 9999999999.\n");
        }
    }
    while(Customer_number < 1 || Customer_number > 9999999999);
        
    
    printf("Customer Id: ");
    scanf("%d", &customer_id);
    
    printf("---------------\n");
    
    printf("COSMETICS\n\n"); 
      
    printf("Body Soap (Rs 10): ");
    scanf("%d", &body_soap); 
    printf("Hair Cream(RS 25): ");
    scanf("%d", &hair_cream); 
    printf("Body Spray(Rs 50): ");
    scanf("%d", &body_spray);
    printf("Hair Spray (Rs 50): ");
    scanf("%d", &hair_spray);
    
    printf("----------------\n");

    printf("GROCERIES\n\n"); 
    
    printf("Sugar (Rs 100): ");
    scanf("%d", &sugar); 
    printf("Tea (RS 20): ");
    scanf("%d", &tea); 
    printf("Coffee (Rs 30): ");
    scanf("%d", &coffee);
    printf("Rice(Rs 150): ");
    scanf("%d", &rice);
    printf("Wheat(Rs 160): ");
    scanf("%d", &wheat);
    
    printf("----------------\n");

    printf("BEVERAGES\n\n"); 
    
    printf("Pepsi (Rs 30): ");
    scanf("%d", &pepsi); 
    printf("Coke (RS 30): ");
    scanf("%d", &coke); 
    printf("Sprite (Rs 35): ");
    scanf("%d", &sprite);
    printf("Thumbs Up (Rs 20): ");
    scanf("%d", &thumbs_up);
    printf("Mirinda(Rs 20): ");
    scanf("%d", &mirinda);

    printf("----------------\n");
    
    int boso, hc, hs, bosp;
    
    boso = 10 * body_soap;
    hc =25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetic_total = boso + hc + hs + bosp;
    
    printf("----------------\n");
    
    int s, t, c, r, w;
    
    s = 100 * sugar;
    t = 20 * tea;
    c = 30 * coffee;
    r = 150 * rice;
    w = 160 * wheat;
    grocery_total = s + t + c + r + w;
    
    printf("----------------\n");

    int pep, cok, spr, thu, min;
    
    pep = 30 * pepsi;
    cok = 30 * cok;
    spr = 35 * sprite;
    thu = 20 * thumbs_up;
    min = 20 * mirinda;
    beverage_total = pep + cok + spr + thu + min;   
    
    total = cosmetic_total + grocery_total + beverage_total;
    
    printf("Total Amount:  %d Rs\n", total);
    printf("----------------\n");

    printf("---------------------------------------------------------\n");
    
    printf("DMART\n\n");
    
    printf("Customer Name: %s\n ", name);
    printf("Customer Number: %d\n", Customer_number);
    printf("Customer Id: %d\n", customer_id);
    
        
    printf("PRODUCT NAME                              QUNTITY                           PRICE\n\n");
    printf("Body Soap                                   %d                          %d\n", body_soap, boso);
    printf("Hair Cream                                  %d                          %d\n", hair_cream, hc);
    printf("Body Spray                                  %d                          %d\n", body_spray, bosp);
    printf("Hair Spray                                  %d                          %d\n", hair_spray, hs);
    printf("Sugar                                       %d                          %d\n", sugar, s);
    printf("Tea                                         %d                          %d\n", tea, t);
    printf("Coffee                                      %d                          %d\n", coffee, c);
    printf("Rice                                        %d                          %d\n", rice, r);
    printf("Wheat                                       %d                          %d\n", wheat, w);
    printf("Pepsi                                       %d                          %d\n", pepsi, pep);
    printf("Coke                                        %d                          %d\n", coke, cok);
    printf("Sprite                                      %d                          %d\n", sprite, spr);
    printf("Thumbs Up                                   %d                          %d\n", thumbs_up, thu);
    printf("Mirinda                                     %d                          %d\n", mirinda, min);
    
    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetic Total Price : %d\n\n", cosmetic_total);
    
    printf("Beverage Total Price : %d\n\n", beverage_total);
    
    printf("Total Price : %d\n\n", total);
    
    printf("---------------------------------------------------------\n");
    
    return 0;
    
    
    }
