if (r>=2 && r<7){
      // for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                out[count++]=out[count]+ char(97+3*(r-2)+j);
            }
       // }
    }
    else if(r==8){
       // for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                out[count++]=char(98+3*(r-2)+j);
            }
       // }
    }
    else if(r==7){
       // for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                out[count++]=char(97+3*(r-2)+j);
            }
       // }
    }
    else if(r==9){
       // for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                out[count++]=char(98+3*(r-2)+j);
            }
       // }
    }
