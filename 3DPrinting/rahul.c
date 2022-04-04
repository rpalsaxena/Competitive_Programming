
/*
    int n_printers= 3;
    int inks = 4;
    int printers[n_printers][inks];

    int ncases;
    cin >> ncases;
    for (int tc=0; tc<ncases; tc++){

    for (int i = 0; i<n_printers; i++){
        for (int j = 0; j<inks; j++){
            cin>> printers[i][j];
        }
    }
    int A = INT_MAX;
    for (int i=0; i< 3; i++){
        if(A>printers[i][0] ){
            A = printers[i][0];
        }
    }

    int B = INT_MAX;
    for (int i=0; i< 3; i++){
        if(B>printers[i][1] ){
            B = printers[i][1];
        }
    }

    int C = INT_MAX;
    for (int i=0; i< 3; i++){
        if(C>printers[i][2] ){
            C = printers[i][2];
        }
    }
    int D = INT_MAX;
    for (int i=0; i< 3; i++){
        if(D>printers[i][3] ){
            D = printers[i][3];
        }
    }

    //cout<<"minimum" << A<<" "<< B<<" "<< C<<" "<< D<<endl;
    cout<<"Case #"<<tc+1<<": ";
    int TOTAL_REQ = 1000000;
    if ((A+B+C+D) < TOTAL_REQ){
        cout<< "IMPOSSIBLE"<<endl;
    }
    else if((A+B+C+D) == TOTAL_REQ){
        //cout<<"HELLO"<<endl;
        cout<< A<<" "<<B<<" "<<C<<" "<<D<<endl;

    }
    else{
        //start with A
        int req = TOTAL_REQ - (B+C+D);
        if(req < A && req >=0){
            cout<< req<<" "<<B<<" "<<C<<" "<<D<<endl;
        }
        else if(req < 0){
            //req is negative, let's convert it to positive
            req = -1*req;
            A = 0;
            //check for B
            if (B >= req){
                // 80k >40k
                cout<<A<<" "<<B-req<<" "<<C<<" "<<D<<endl;
            }
            else{
                //B 50k  req 80k
                req -= B; //req 30k
                B = 0;

                //check for C
                if (C >= req){
                    // 40k > 10k
                    cout<<A<<" "<<B<<" "<<C-req<<" "<<D<<endl;
                }
                else{
                    //check for D
                    //C 10k req 30k
                    req -= C;  //req = 20k
                    C = 0;
                    cout<<A<<" "<<B<<" "<<C<<" "<<D-req<<endl;
                }
            }
        }

        else{
            //check for B
            req = TOTAL_REQ - (A+C+D);
            if(req < B){
                cout<< A<<" "<<req<<" "<<C<<" "<<D<<endl;
            }
            else{
                //check for C
                req = TOTAL_REQ - (A+B+D);
                if(req < C){
                    cout<< A<<" "<<B<<" "<<req<<" "<<D<<endl;
                }
                else{
                    req = TOTAL_REQ - (A+B+C);
                    if(req<D){
                        cout<<A <<" "<<B<<" "<<C<<" "<<req<<endl;
                    }
                }

            }


        }
    }

}
*/
