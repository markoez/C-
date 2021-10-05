#include <iostream>
using namespace std;
int main()
{   
  int area,area_cost,areaP_cost,material_cost,sum_cost ;
  char area_type,material_type;
cout << "Enter the area : ";
cin >> area;
cout << "Enter type of the  material : ";
cin >> material_type;

if (area>=20 && area <=40){  //S
    area_cost = 200000;
    area_type = 'S';
}
else if(area >= 41 && area <=100){ //M
    areaP_cost = area - 40;
    area_cost = 200000+(areaP_cost*3000);
    area_type = 'M';
}
else if (area >=101 ){  //L
    areaP_cost = area - 60;
    area_cost = 200000+150000+(areaP_cost*2000);
    area_type = 'L';
}
else{
    cout << "your area less than 20 square meter "; // ใส่เลขน้อยกว่า 20
}

    if(material_type == 'B' || material_type =='b' ){ //Basic
        if(area_type == 'S'){
            material_cost = area*5000;
        }else if(area_type == 'M'){
            material_cost = area*7500;
        }else if(area_type == 'L'){
            material_cost = area*15000;
        }else{
            cout << "Error";
            return(0);
        }

    }else if (material_type == 'G' || material_type =='g' ){ //Gold
        if(area_type == 'M'){
            material_cost = area*10000;
        }else if(area_type == 'L'){
            material_cost = area*20000;
        }else{
            cout << "Error";
            return(0);
        }
    }else if (material_type == 'P' || material_type =='p'){//Platinum
        if(area_type == 'M'){
            material_cost = area*15000;
        }else if(area_type == 'L'){
            material_cost = area*30000;
        }else{
            cout << "Error";
            return(0);}
    }else {}
    sum_cost = area_cost+material_cost;
    cout << "The house will cost "<< sum_cost << " bath to build."<<endl;
    // cout <<  "lod dai mai? kon kan eng"<<endl;
    // cout <<  "kor dai kor dai lod hai 80000 bath"<<endl;
    // cout <<  "The house will cost "<< sum_cost-80000 << " bath to build."<<endl;

    return 0;
}