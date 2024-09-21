#include<iostream>
using namespace std;
struct thecar{
	string company,modal,colour;
	int registrationnumber,year,rent;
 

};
// function
 

                                                   
displaycar(thecar thecar){                                   
	cout<<"                                        |^_^|-|^_^|-|^_^|-|^_^|-|^_^|-|^_^|"<<endl;
	cout<<"                                        |company of car: | "<<thecar.company; cout<<"  "<<endl;
	cout<<"                                        |modal:          | "<<thecar.modal; cout<<"  "<<endl;
	cout<<"                                        |colour of car:  | "<<thecar.colour; cout<<"      "<<endl;
	cout<<"                                        |registration no:| "<<thecar.registrationnumber; cout<<"  "<<endl;
	cout<<"                                        |year:           | "<<thecar.year; cout<<"      "<<endl;
	cout<<"                                        |rent of car:    | "<<thecar.rent; ;cout<<""<<"/day"<<endl;
	cout<<"                                        |________________|_________________"<<endl<<endl;
}


int main (){
	cout<<"      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"      $~~~~~~~~~~~~~~~~~~~~~~~~~~                  WELCOME TO                   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"      $~~~~~~~~~~~~~~~~~~~~~~~~~~          MIRACLE CAR RENTAL SYSTEM            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"                NOTE : For our privacy policy we can give you only one car at a time . "<<endl<<endl<<endl<<endl;       
	char s;

	thecar thecar7754={"MARUTI SUZUKI","ERTIGA","WHITE",7754,2020,5000};
	thecar thecar2573={"MARUTI SUZUKI","BALENO","BLUE",2573,2019,4500};   
	thecar thecar9023={"MARUTI SUZUKI","ALTO 800","GRAY",9023,2019,2500};     
	thecar thecar1126={"MARUTI SUZUKI","ECO","WHITE",1126,2018,3000};  
	thecar thecar3013={"HUNDAI","VERNA","BLACK",3013,2022,7000};        
	thecar thecar2233={"HUNDAI","I20","WHITE",2233,2021,4500};    
	thecar thecar1212={"HUNDAI","SANTRO","GRAY",1212,2019,3500};
	thecar thecar6677={"HUNDAI","VENUE","RED",6677,2019,4000};	    
	thecar thecar1122={"FORD","ECOSPORT","RED",1122,2018,3000};
	thecar thecar9911={"FORD","FIGO","WHITE",9911,2018,2500};
	thecar thecar9900={"FORD","ASPIRE","WHITE",9900,2017,4500};
	thecar thecar3337={"FORD","MUSTANG","BLACK",3337,2019,19000};
	thecar thecar1112={"MAHENDRA","XUV700","WHITE",1112,2023,12000};
	thecar thecar7788={"MAHENDRA","SCORPIO","WHITE",7788,2023,10000};  
	thecar thecar5645={"MAHENDRA","BULERO","WHITE",5645,2020,7000};    
	thecar thecar5557={"MAHENDRA","THAR","BLACK",5557,2022,10000};
	thecar thecar1007={"TATA","PUNCH","BLUE",1007,2020,4500};  
	thecar thecar4471={"TATA","TIGOR","GRAY",4471,2021,4000};        
	thecar thecar4331={"TATA","HARRIER","BLACK",4331,2022,8000};    
	thecar thecar1247={"TATA","SAFARI","GRAY",1247,2020,11000};
	thecar thecar1777={"TOYOTA","FORTUNER","BLACK",1777,2023,15000};
	thecar thecar3177={"TOYOTA","INNOVA","WHITE",3177,2023,11000};
	thecar thecar4900={"TOYOTA","LAND CRUISER","WHITE",4900,2023,21000};
		
	top:
	cout<<"          # PRESS S TO START :"<<endl;
    cin>>s;
if(s=='s'|| s=='S'){
	
	cout<<"      ===========================                   CAR AVAILABLE                ==========================="<<endl<<endl; 
	cout<<"                                           We have budget friendly cars ^_^ "<<endl; 
	
	
	 
	cout<<"                                        |^_^|-|^_^|-|^_^|-|^_^|-|^_^|-|^_^|"<<endl;
	cout<<"                                        | ENTER MS FOR : | MARUTI SUSUKI  |"<<endl;
	cout<<"           ____________                 | ENTER H FOR :  |    HUNDAI      |"<<endl;
	cout<<"           |  _  /    |                 | ENTER F FOR :  |     FORD       |"<<endl;
	cout<<"      _____|     |    |_____            | ENTER M FOR :  |   MAHENDRA     |"<<endl; 
	cout<<"      |                    |            | ENTER T FOR :  |     TATA       |"<<endl;
	cout<<"      |___--__________--___|            | ENTER TO FOR : |    TOYOTA      |"<<endl;   
	cout<<"          --          --                |________________|________________|"<<endl;
	
	
	
	
	g:
	cout<<"ENTER BRAND TO PROCEED"<<endl;
	int choice ;
	string fcar;
	cout<<"ENTER=";
	cin>>fcar;
//maruti susuki
	if(fcar=="ms"|| fcar=="MS" || fcar=="Ms"){
	
		displaycar(thecar7754);
	    displaycar(thecar2573);
	    displaycar(thecar9023);
	    displaycar(thecar1126);
	    
	    cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	    
        if(choice==7754){
     	 	cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
 			displaycar(thecar7754);
			
	 	}
 	 	else if(choice==2573){
	 	cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
	 	displaycar(thecar2573);
	    }
	  	else if(choice==9023){
	 	cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
	 	displaycar(thecar9023);
	    }
	    else if(choice==1126){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1126);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;
	    
		}
    }
//hundai
	else if(fcar=="h" || fcar=="H"){
		displaycar(thecar3013);
	    displaycar(thecar2233);	
	    displaycar(thecar1212);
        displaycar(thecar6677);	
        
        cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	
	    if(choice==3013){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar3013);
	    }
	    else if(choice==2233){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar2233);
	    }
     	else if(choice==1212){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1212);
	    }
	    else if(choice==6677){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar6677);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;
	
		}
    }
//font
    else if(fcar=="f" || fcar=="F"){
		displaycar(thecar1122);
	    displaycar(thecar9911);	
	    displaycar(thecar9900);
        displaycar(thecar3337);	
        
        cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	
	    if(choice==1122){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1122);
	    }
	    else if(choice==9911){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar9911);
	    }
     	else if(choice==9900){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar9900);
	    }
	    else if(choice==3337){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar3337);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;

		}
    }
//mahendra
    else if(fcar=="m" || fcar=="M"){
		displaycar(thecar1112);
	    displaycar(thecar7788);	
	    displaycar(thecar5645);
        displaycar(thecar5557);	
	
	    cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	    
	    
	    if(choice==1112){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1112);
	    }
	    else if(choice==7788){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar7788);
	    }
     	else if(choice==5645){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar5645);
	    }
	    else if(choice==5557){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar5557);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;
	
		}
    }

//tata
    else if(fcar=="t" || fcar=="T"){
		displaycar(thecar1007);
	    displaycar(thecar4471);	
	    displaycar(thecar4331);
        displaycar(thecar1247);	
        
        
        cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	
	    if(choice==1007){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1007);
	    }
	    else if(choice==4471){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar4471);
	    }
     	else if(choice==4331){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar4331);
	    }
	    else if(choice==1247){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1247);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;
		}
    }
    
    
//toyota
    else if(fcar=="to" || fcar=="TO"){
		displaycar(thecar1777);
	    displaycar(thecar3177);	
	    displaycar(thecar4900);	
	    
	    cout<<endl<<endl;
	    cout<<"ENTER REGISTRATION NO :";
	    cin>>choice;
	
	    if(choice==1777){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar1777);
	    }
	    else if(choice==3177){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar3177);
	    }
     	else if(choice==4900){
		cout<<"YOU HAVE SUCCESSFULLY RENTED THE FOLLOWING CAR"<<endl;
		displaycar(thecar4900);
	    }
	    else{
	    	cout<<" INVELID INPUT "<<endl;

		}
    }
    else{
	cout<<"INVELID INPUT"<<endl;
	goto g;
	}
}



else{
	cout<<"you press a wrong key"<<endl;
	goto top;
}
    string name , sirname , email , adhar , phoneno ;
    int a,b;
    cout<<"HOW MANY DAYS YOU WANT THIS CAR  : "; cin>>a;
    cout<<" "<<endl<<endl;
    
    
    cout<<"                  *****************FOR BILL PLZ ENTER******************"<<endl; 
    cout<<"FIRST NAME : ";
    cin>>name;
    cout<<"LAST NAME  : " ; cin>>sirname;
    cout<<"YOUR AADHAR CARD NO. :";  
	cin>>adhar;
    cout<<"YOUR PHONE NUMBER : " ; 
	cin>>phoneno;
    cout<<"YOUR EMAIL  : " ; 
	cin>>email;
    cout<<" FOR CONFORMATION HOW MUCH DO YOU GOING TO PAY FOR ONE DAY : "; cin>>b;
    cout<<" "<<endl<<endl<<endl<<endl;
    
    
    
    
   	cout<<"                                            ** MIRACLE CAR RENTEL BILL **"<<endl;
	cout<<"                                        _________________________________"<<endl;
	cout<<"                                        |name :          | " <<name<<" "<<sirname<<endl;
	cout<<"                                        |aadrcard no :   | " <<adhar<<endl;
	cout<<"                                        |phone no :      | " <<phoneno<<endl;
	cout<<"                                        |no of days :    | " <<a<<endl; 
	cout<<"                                        |rent of car:    | " <<b<<"/day"<<endl;
	cout<<"                                        |________________|______________"<<endl;
	cout<<"                                        |total amount :  | " <<b*a <<endl;
	cout<<"                                        |________________|______________"<<endl;
    cout<<"                                               THANKYOU , VISIT AGAIN   "<<endl;
}

