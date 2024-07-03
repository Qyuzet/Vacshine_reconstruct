// Online C compiler to run C program online
#include <stdio.h>

// Function declarations
void pranscreen();
void praregnreg();
void regis();
void q1();
void q2();
void vlda(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l, int m, int n, int o, int hbaoc, char dmt, int cdf, char ceda, int cons);
void screening();
void vldb(int bt, char bp);
void que();
void certificate();


//------PRA REGISTRATION VARIABLE-------------------------------------------------------------------------------------------------

    char gen;       //for storing type of patient decision

//------REGISTRATION VARIABLE-----------------------------------------------------------------------------------------------------

    char cname[25]; //for storing name
    char cadd[25];  //for storing address
    int nik[18];    //for storing NIK
    int age;        //for storing age

//------PRA SCREENING VARIABLE----------------------------------------------------------------------------------------------------

    int x[14];      //for storing 15 different variable of question type 1 (numeric decision)
    int xx;         //Total value of Question type 1 (numeric decision)
    int y;          //Total value of Question type 2 (numeric decision)
    int cdf;        //for CD4 HIV value (numeric decision)
    int hbaoc;      //for HbA01C DM value (numeric decision)
    char dmt;       //for DMT char input type (character decision)
    char ceda;      //for CD4 char input type (character decision)
    char cons;      //for value of consultation (character decision)
    int dose;       //for vaccination value type of dose (numeric decision)


//------PRA SCREENING VALIDATION VARIABLE------------------------------------------------------------------------------------------

    int zip=0;      //Indicator to represent true validation
    int xip=0;      //Indicator to represent false validation
    char init='a';  //Indicator to represent unique symbol to represent consultation validation
    char unit='a';  //Indicator to represent unique symbol to represent several decision except consultation validation

//-------SCREENING & SCREENING VALIDATION VARIABLE---------------------------------------------------------------------------------

    int bt;         //for storing body temprature value
    char bp;        //for storing blood pressure value


int main() {

praregnreg();       //Function for doin pra registration and registration
pranscreen();       //Function for doing pra screening and screening
que();              //Function for displaying the patient queue number of vaccination
certificate();      //Function for displaying the patient script certificate of vaccination
    
    
printf("\n");                                                       //Creator identity
printf("\n");                                                       //Creator identity
printf("----------------Copyright all reserved-------------\n");    //Creator identity
printf("Created by Riki Awal Syahputra & Naufal Rafliansyah\n");    //Creator identity
printf("____0_2__1_1__2_0_2_1___________V0.1_______________\n");    //Creator identity
printf("______c_e_n_t_e_r__o_f__c_o_m_p_u_t_i_n_g__U_I_____\n");    //Creator identity

return 0;
    
}


//PRA SCREENING AND SCREENING FUNCTION/PROCEDURE------------------------

void pranscreen(){
printf("_______________________________________\n");
printf("---------------PRA-SCREENING-----------\n");
printf("\n");
printf("Which vaccination do you want?\n");
printf("1st dose(1)/2nd dose(2): ");
scanf(" %d",&dose);


if(dose==1){
q1();
}

else if(dose==2){
q2();
}
    
else {
printf("\n");
printf("[[OUT OF REACH EXPRESSION STATEMENT]]\n"); 
printf("[[.............RECONNECT...........]]\n"); 
printf("\n");
exit(0);
}   
}
//PRA REGISTRATION AND REGISTRATION FUNCTION/PROCEDURE------------------
void praregnreg(){
    
printf("______________________________________________\n");
printf("---------------WELLCOME TO VACSHINE-----------\n");
printf("WHICH ONE ARE YOU?\n ");
printf("TYPE 'n' FOR NEW PATIENT, AND 'o' FOR OLD PATIENT\n ");
printf("NEW(n)/OLD PATIENT(o)? ");
scanf(" %c", &gen);

if(gen == 'n'){
printf("_______________________________________\n");
printf("-------GO TO REGISTRATION STAGE--------\n");
printf("\n");
regis();
}
    
else if(gen == 'o'){
printf("_______________________________________\n");
printf("-------GO TO PRA SCREENING STAGE--------\n");
printf("\n");
}
    
else{
printf("\n");
printf("[[OUT OF REACH EXPRESSION STATEMENT]]\n"); 
printf("[[.............RECONNECT...........]]\n"); 
printf("\n");
exit(0);
}
}


//REGISTRATION FUNCTION/PROCEDURE-----------------------------------------
void regis(){


    
printf("_______________________________________\n");
printf("-------------REGISTRATION--------------\n");
printf("\n");
printf("NAME   :"); 
scanf(" %[^\n]", &cname); 
printf("AGE    :"); 
scanf(" %d", &age); 
printf("ADDRESS :"); 
scanf(" %[^\n]", &cadd);
printf("NIK    :"); 
scanf(" %[^\n]", &nik);

printf("\n");
printf("_______________________________________\n");
printf("---------------IDENTITY DATA-----------\n");
printf("\n");
printf("NAME  : %s\n",cname); 
printf("AGE   : %d\n",age); 
printf("ADRESS: %s\n",cadd); 
printf("NIK   : %s\n",nik); 
printf("\n");
printf("_______________________________________\n");
    
printf("-------------------STATUS--------------\n");    
printf("\n");   
if(age>=12){
printf("DATA VERIFIED AND PERMITTED TO GO TO THE NEXT STAGE");
printf("\n"); 
printf("_______________________________________\n");
}
else if(age<12){
printf("PATIENT UNDER CRITERIA OF AGE");
printf("\n"); 
printf("_______________________________________\n");
exit(0);

}
else{
printf("SORRY, EXPRESSION OUT OF REACH");
printf("\n"); 
printf("_______________________________________\n");
exit(0);
}

}

//QuUESTION TYPE 1 FUNCTION/PROCEDURE------------------------------------

void q1(){
    
    
    printf("\n"); 
    printf("_______________________________________\n");
    printf("----------PRA SCREENING QUESTION-------\n");
    printf("\n");
    printf(" INPUT THE ANSWER CORRECTLY, (1) FOR YES AND (0) FOR NO\n");
    printf("\n");
    printf("1. Have you ever been confirmed to have COVID-19? ");
    scanf("%d",&x[0]);
    printf("2. Are you pregnant or breastfeeding? ");
    scanf("%d",&x[1]);
    printf("3. Have you experienced ARI symptoms such as cough/pills/shortness of breath in the last 7 days? ");
    scanf("%d",&x[2]);
    printf("4. Are there any family members in the household who are in close contact/suspect/confirmed/under treatment due to COVID-19 disease? ");
    scanf("%d",&x[3]);
    printf("5. Are you on long-term active therapy for blood disorders?? ");
    scanf("%d",&x[4]);
    printf("6. Do you have heart disease (heart failure/coronary heart disease)? ");
    scanf("%d",&x[5]);
    printf("7. Do you suffer from Systemic Autoimmune Disease (SLE/Lupus, Sjogren's, vasculitis, and other autoimmune diseases)? ");
    scanf("%d",&x[6]);
    printf("8. Do you have kidney disease? (chronic kidney disease/undergoing hemodialysis/peritoneal dialysis/kidney transplant/nephrotic syndrome with corticosteroids)? ");
    scanf("%d",&x[7]);
    printf("9. Do you suffer from Autoimmune Rheumatism / Rheumatoid Arthritis? ");
    scanf("%d",&x[8]);
    printf("10. Do you suffer from chronic digestive tract disease? ");
    scanf("%d",&x[9]);
    printf("11. Do you suffer from hyperthyroid/hypothyroid disease due to autoimmune? ");
    scanf("%d",&x[10]);
    printf("12. Do you have cancer, blood disorders, immunocompromised/immune deficiency, and recipient of blood products/transfusions? ");
    scanf("%d",&x[11]); 
    printf("13.Do you suffer from Diabetes Mellitus? ");
    scanf("%d",&x[12]);
    
    if(x[12]==1){
        printf("\n");
        printf("_______________________________________\n");
        printf(" [SPECIAL] IS YOUR DIABETES MELLITUS CONTROLLED (y/n)?  ");
        scanf(" %c", &dmt);
        
        printf(" [SPECIAL] WHAT IS YOUR HbA1C VALUE? ");
        scanf(" %d", &hbaoc);
        
        printf("// GET OUT OF SPECIAL QUESTIONS // \n");
        printf("_______________________________________\n");
        printf("\n");
    }


    printf("14.Do you have HIV? ");
    scanf(" %d", &x[13]);

    if(x[13]==1){

        printf("[SPECIAL] DO YOU KNOW THE VALUE OF CD4? (y/n) ");
        scanf(" %c", &ceda);

        }
        if(ceda=='y'){
        printf("[SPECIAL] WHAT IS YOUR CD4 VALUE? ");
        scanf(" %d", &cdf);
        printf(" \n");
        printf(" // GET OUT OF SPECIAL QUESTIONS // \n");
        printf("_______________________________________\n");
        printf("\n");
        }

        if(ceda=='n'){
        printf(" BACK TO GENERAL QUESTIONS OUTSIDE DIABETES MELLITUS \n");
        printf("_______________________________________\n");
        printf("\n");
            
        }
    
    printf("15. Do you have any lung disease (asthma, COPD, tuberculosis)? ");
    scanf(" %d",&x[14]);

    if(x[14]==1){
        printf("_______________________________________\n");
        printf("[DOCTOR CONSULTATION SESSION]\n");
        printf("[                          ] \n");
        printf("[                          ] \n");
        printf("[                          ] \n");
        printf("[IF PATIENT IS ALLOWED, PRESS 'y', IF NOT, PRESS 'n']\n");
        scanf(" %c", &cons);     
        printf("_______________________________________\n");
    }

    vlda(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9],x[10],x[11],x[12],x[13],x[14],hbaoc,dmt,cdf,ceda,cons);

}

//QUESTION TYPE 2 FUNCTION/PROCEDURE--------------------------------------
void q2(){
    
    printf("\n"); 
    printf("_______________________________________\n");
    printf("----------PRA SCREENING QUESTION-------\n");
    printf("\n");
    printf(" INPUT THE ANSWER CORRECTLY, (1) FOR YES AND (0) FOR NO\n");
    printf("\n");
    printf("1. Do you have a history of severe allergies or experience symptoms of shortness of breath, swelling and redness after being vaccinated against COVID-19 before? ");
    scanf(" %d", &y);
    if(y==1){
        printf("\n");
        printf("VACCINATION POSTPONED");
        exit(0);
    }
    if(y==0){
        printf("\n");
        printf("GO TO SCREENING STAGE\n");
        screening();
    }
}

//PRA SCREENING VALIDATION FUNCTION/PROCEDURE-----------------------------
void vlda(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l, int m, int n, int o, int hbaoc, char dmt, int cdf, char ceda, int cons){

    xx = a+b+c+d+e+f+g+h+i+j+k+l;
    
 
    //Q1 CONDITION TRUE------------------------------------------------------------------------------------------------Q1
    if(xx<1){
        zip++;
    }
    //Q1 CONDITION FALSE-----------------------------------------------------------------------------------------------Q1
    if(xx>=1){
        xip++;   
        unit='b';
    }
    
    //------------------------------------------------------------------------------------------------------------------------------
    
    //DM CONDITION TRUE------------------------------------------------------------------------------------------------DM
    if(m == 0){
        zip++;
  
    }
    if(dmt=='y' && hbaoc <58 && m == 1){
        zip++;

    }
    //DM CONDITION FALSE-----------------------------------------------------------------------------------------------DM
    if(dmt=='n' && hbaoc >58 && m == 1){
        xip++;
        unit='b';
    }
    
    //------------------------------------------------------------------------------------------------------------------------------
    
    //HIV CONDITION TRUE-----------------------------------------------------------------------------------------------HIV
    if(n == 0){
        zip++;

    }
    if(cdf>200 && ceda =='y' && n == 1){
        zip++;
 
    }
    //HIV CONDITION FALSE----------------------------------------------------------------------------------------------HIV
    if(cdf<200 && ceda =='y' && n == 1){
        xip++;
        unit='b';
    }
    if(ceda =='n' && n == 1){
        xip++;
        unit='b';
    }
    
    //-------------------------------------------------------------------------------------------------------------------------------
    
    //CONSULTATION CONDITION TRUE-------------------------------------------------------------------------------------CONSULTATION
    if(o == 0){
        zip++;
    }
    if(cons=='y' && o == 1){
        zip++;
        
    }
    //CONSULTATION CONDITION FALSE------------------------------------------------------------------------------------CONSULTATION
    if(cons=='n' && o == 1){
        xip++;
        if(unit=='b'){
        init='a';
        }
        if(unit=='a'){
        init='b';
        }
    }
    
    //--------------------------------------------------------------------------------------------------------------------
    
    printf("\n");
    printf("_______________________________________\n");
    printf("------------DECISION PROFILE-----------\n");
    printf("\n");
    printf("VALUE xx: %d\n", xx);
    printf("VALUE hbaoc: %d\n", hbaoc);
    printf("VALUE dmt: %c\n", dmt);
    printf("VALUE cdf: %d\n", cdf);
    printf("VALUE ceda: %c\n", ceda);
    printf("VALUE cons: %c\n", cons);
    printf("ZIP INDICATOR: %d\n", zip);
    printf("XIP INDICATOR: %d\n", xip);
    printf("INIT INDICATOR: %c\n", init);
    printf("UNIT INDICATOR:%c\n", unit);
    printf("_______________________________________\n");
    printf("\n");
    
    if(zip>=4 && xip<1 && init=='a' && unit=='a'){
        screening();
    }
    if(zip==3 && xip==1 && init=='a' && unit=='b'){
        printf("VACCINATIONS NOT ALLOWED");
        exit(0);
    }
    if(zip==3 && xip==0 && init=='a' && unit=='a'){
        printf("VACCINATIONS NOT ALLOWED");
        exit(0);
    }
    if(zip<3 && xip>1 && init=='a' && unit=='b'){
        printf("VACCINATIONS NOT ALLOWED");
        exit(0);
    }
    if(zip<=3 && xip>=1 && init=='b' && unit=='a'){
        printf("VACCINATION DELAYED");
        exit(0);
    }
}

//SCREENING FUNCTION/PROCEDURE---------------------------------------------
void screening(){
    
    printf("_______________________________________\n");
    printf("\n");
    printf("SCREENING STAGE");
    printf("\n");
    printf("_______________________________________\n");
    printf("BODY TEMPERATURE PROFILE\n");
    printf("BODY TEMPERATURE : ");
    scanf(" %d", &bt);
    printf("\n");
    printf("_______________________________________\n");
    printf("BLOOD PRESSURE PROFILE\n");
    printf("ALLOWED BLOOD PRESSURE : < 180/110\n");
    printf("IS THE PATIENT'S BLOOD PRESSURE APPROPRIATE??(y/n) ");
    
    scanf(" %c", &bp);
    vldb(bt,bp);
        
}

//SCREENING VALIDATION FUNCTION/PROCEDURE---------------------------------
void vldb(int bt, char bp){

printf("\n");
printf("_______________________________________\n");
printf("\n");    
    
printf("STATUS: ");
if(bt>=37 && bp=='n'){
    printf("VACCINATION DELAYED");
    exit(0);
}
if(bt>=37 && bp=='y'){
    printf("VACCINATION DELAYED");
    exit(0);
}
if(bt<37 && bp=='n'){
    printf("VACCINATION DELAYED");
    exit(0);
}
if(bt<37 && bp=='y'){
    printf("VACCINATIONS ALLOWED\n");
}
    
printf("\n");
printf("_______________________________________\n");
    
}

//QUEUE NUMBER FUNCTION/PROCEDURE-----------------------------------------
void que(){

printf("_______________________________________\n");
printf("---------------QUEUE NUMBER------------\n");
printf("\n");
printf("NAME        : %s\n", cname);
printf("LOCATION    : PUBLIC HEALTH CENTER 01, %s\n", cadd);
printf("QUEUE NUMBER: 17");
printf("\n");
printf("_______________________________________\n");
}

//SCRIPT CERTIFICATE FUNCTION/PROCEDURE----------------------------------
void certificate(){
printf("_______________________________________\n");
printf("------------SCRIPT CERTIFICATE---------\n");
printf("\n");
printf("NAME        : %s\n", cname);
printf("LOCATION    : PUBLIC HEALTH CENTER 01, %s\n", cadd);
printf("VACCINE     : MODERNA");
printf("\n");
printf("_______________________________________\n");
}


