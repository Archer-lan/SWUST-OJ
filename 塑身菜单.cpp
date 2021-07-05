#include<stdio.h>
struct dish{
	char name[200];
	int J;
};
dish d[15]={
{"Boiled Fish with Pickled Cabbage and Chili",92},
{"Sauted Sliced Pork with Pepper and Chili , Sichuan Style",231},
{"Cold Noodles Sichuan Style",260},
{"Fish Filets in Hot Chili Oil",239},
{"Steamed Rice Rolls",196},
{"Kung Pao Chicken",313},
{"Hot and Sour Rice Noodles",144},
{"Soybean Milk",92},
{"Steamed Rice",31},
{"Scrambled Egg with Scallion",81},
{"Steamed Jiaozi",119},
{"Sauted Sliced Pork with Black Fungus",143},
{"Scrambled Egg with Leek",128},
{"Steamed Bun Stuffed with Red Bean Paste",128},
{"Yu-Shiang Shredded Pork (Sauted with Spicy Garlic Sauce)",134} 
};
dish t;
int main(){
	int s,sum=0;
	scanf("%d",&s);
	for(int i=0;i<14;i++)  
	{  

		for(int j=i+1;j<15;j++) 
		{
			if(d[i].J>d[j].J)  
			{  
				t=d[i];
				d[i]=d[j];
				d[j]=t; 
			} 
		}
	} 
	for(int i=0;i<15;i++){
		sum=sum+d[i].J;
		if(sum>s) break;
		else
			printf("%s %d\n",d[i].name,d[i].J);
	}
	 
	return 0;
}
