#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//quantity
	int qrooms=0, qpasta=0 , qburger=0, qtea=0, qshake=0, qcoffee=0, qsoyachap=0;
	//food items sold
	int srooms=0, spasta=0 , sburger=0, stea=0, sshake=0, scoffee=0, ssoyachap=0;
	//total proce of items
    int rooms=0,total_rooms=0, total_pasta=0 , total_burger=0, total_tea=0, total_shake=0, total_coffee=0, total_soyachap=0;
cout<<"\n\t quantity of rooms we have ";
cout<<"\n rooms avaliable";
cin>>qrooms;
cout<<"\n quantity of pasta";
cin>>qpasta;
cout<<"\n quantity of burger";
cin>>qburger;
cout<<"\n quantity of tea";
cin>>qtea;
cout<<"\n quantity of shake";
cin>>qshake;
cout<<"\n quantity of coffee";
cin>>qcoffee;
cout<<"\n quantity of soyachap";
cin>>qsoyachap;

m:
cout<<"\n\t\t\t please select from the menue options";
cout<<"\n\n1) rooms";
cout<<"\n2) pasta";
cout<<"\n3) burger";
cout<<"\n4) tea";
cout<<"\n5) shake";
cout<<"\n6) coffee";
cout<<"\n7) soyachap";
cout<<"\n8) info regarding sales and collection";
cout<<"\n9) exit";
cout<<"\n\n please enter your choice ";
cin>>choice;

switch(choice)
{ 
case 1:
	cout<<"\n\n enter the number of rooms you want:";
	cin>>quant;
	if(qrooms-srooms >=quant)
	{
		srooms=srooms+quant;
		total_rooms=total_rooms+quant*1000;
		cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
		
	}
	else
	cout<<"\n\tonly"<<qrooms-srooms<<"rooms remaining in hotel";
	break;
	case 2:
	cout<<"\n\n enter the pasta quantity:";
	cin>>quant;
	if(qpasta-spasta >=quant)
	{
		spasta=spasta+quant;
		total_pasta=total_pasta+quant*250;
		cout<<"\n\n\t\t"<<quant<<"pasta is your oder";
		
	}
	else
	cout<<"\n\tonly"<<qpasta-spasta<<"pasta remaining in hotel";
	break;
	case 3:
	cout<<"\n\n enter the no. of burger";
	cin>>quant;
	if(qburger-sburger >=quant)
	{
		sburger=sburger+quant;
		total_burger=total_burger+quant*150;
		cout<<"\n\n\t\t"<<quant<<"burger/ burgers are order ";
		
	}
	else
	cout<<"\n\tonly"<<qburger-sburger<<"burgers remaining in hotel";
	break;
	case 4:
	cout<<"\n\n enter the cup of tea:";
	cin>>quant;
	if(qtea-stea >=quant)
	{
		stea=stea+quant;
		total_tea=total_tea+quant*50;
		cout<<"\n\n\t\t"<<quant<<"you ordered the tea";
		
	}
	else
	cout<<"\n\tonly"<<qrooms-srooms<<"cup of tea remaining in the hotel";
	break;
	case 5:
	cout<<"\n\n enter the no. of glass of shake you want:";
	cin>>quant;
	if(qshake-sshake >=quant)
	{
		sshake=sshake+quant;
		total_shake=total_shake+quant*100;
		cout<<"\n\n\t\t"<<quant<<"you ordered shake ";
		
	}
	else
	cout<<"\n\tonly"<<qshake-sshake<<"quantity of shake remaining in hotel";
	break;
	case 6:
	cout<<"\n\n enter the number of cup of coffee you want:";
	cin>>quant;
	if(qcoffee-scoffee >=quant)
	{
		scoffee=scoffee+quant;
		total_coffee=total_coffee+quant*100;
		cout<<"\n\n\t\t"<<quant<<"you have been ordered coffee to you";
		
	}
	else
	cout<<"\n\tonly"<<qcoffee-scoffee<<"cup of coffee remaining in hotel";
	break;
case 7:
	cout<<"\n\n enter the quantity of soyachap you want:";
	cin>>quant;
	if(qsoyachap-ssoyachap >=quant)
	{
		ssoyachap=ssoyachap+quant;
		total_soyachap=total_soyachap+quant*280;
		cout<<"\n\n\t\t"<<quant<<"you have been ordered soyachap";
		
	}
	else
	cout<<"\n\tonly"<<qsoyachap-ssoyachap<<"soyachap remaining in hotel";
	break;
case 8:
	cout<<"\n\n details of sales and collection";
    cout<<"\n\n number of rooms we had:"<<qrooms;
    cout<<"\n\n number of rooms we gave for rent"<<srooms;
    cout<<"\n\n remaining rooms:"<<qrooms-srooms;
    cout<<"\n\n total rooms collection for the day:"<<total_rooms;
    
    cout<<"\n\n number of pasta we had:"<<qpasta;
    cout<<"\n\n number of pasta we sold "<<spasta;
    cout<<"\n\n remaining pasta:"<<qpasta-spasta;
    cout<<"\n\n total pasta collection for the day:"<<total_pasta;
    
        cout<<"\n\n number of burger we had:"<<qburger;
    cout<<"\n\n number of burger we sold "<<sburger;
    cout<<"\n\n remaining burger:"<<qburger-sburger;
    cout<<"\n\n total burger collection for the day:"<<total_burger;

    cout<<"\n\n number of tea we had:"<<qtea;
    cout<<"\n\n number of tea we sold "<<stea;
    cout<<"\n\n remaining tea:"<<qtea-stea;
    cout<<"\n\n total tea collection for the day:"<<total_tea;

    cout<<"\n\n number of shake we had:"<<qshake;
    cout<<"\n\n number of shake we sold "<<sshake;
    cout<<"\n\n remaining shake:"<<qshake-sshake;
    cout<<"\n\n total shake collection for the day:"<<total_shake;
    
    cout<<"\n\n number of coffee we had:"<<qcoffee;
    cout<<"\n\n number of coffee we sold "<<scoffee;
    cout<<"\n\n remaining coffee:"<<qcoffee-scoffee;
    cout<<"\n\n total coffee collection for the day:"<<total_coffee;

    cout<<"\n\n number of soyachap we had:"<<qsoyachap;
    cout<<"\n\n number of soyachap we sold "<<ssoyachap;
    cout<<"\n\n remaining soyachap:"<<qsoyachap-ssoyachap;
    cout<<"\n\n total soyachap collection for the day:"<<total_soyachap;
case 9:
	exit (0);
	 
	default:
		cout<<"\n please select the number mentioned above..";
}
goto m;


}
