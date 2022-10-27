map<int,int> hmap;
        queue<int> q;
        int cnt = 0;
        for(int i=0; i<=9; ++i){
            hmap[i] += 1;
            q.push(i);
            if(i >=n && i<=m){
                cnt += 1;
            }
        }
        while(!q.empty()){
            int top = q.front();
            q.pop();
            
            
            int nDigits = getDigits(top);
            int firstDigit = getMSD(top);
            int lastDigit = getLSD(top);
            int adj1 = (lastDigit == 0)?top:top*10+(lastDigit-1);
            int adj2 = (lastDigit == 9)?top:top*10+(lastDigit+1);
            int adj3 = (firstDigit == 0)?top:(firstDigit-1)*pow(10,nDigits)+top;
            int adj4 = (firstDigit==9)?top:(firstDigit+1)*pow(10,nDigits)+top;
            // cout<<top << " "<<adj1<<" "<<adj2<<" "<<adj3<<" "<<adj4<<"\n";
            if(hmap.find(adj1) == hmap.end() && adj1<=m){
                hmap[adj1] += 1;
                q.push(adj1);
                if(adj1 >=n && adj1<=m){
                    cnt += 1;
                }
            }
            if(hmap.find(adj2) == hmap.end() && adj2<=m){
                hmap[adj2] += 1;
                q.push(adj2);
                if(adj2 >=n && adj2<=m){
                    cnt += 1;
                }
            }
            if(hmap.find(adj3) == hmap.end() && adj3<=m){
                hmap[adj3] += 1;
                q.push(adj3);
                if(adj3 >=n && adj3<=m){
                    cnt += 1;
                }
            }
            if(hmap.find(adj4) == hmap.end() && adj4<=m){
                hmap[adj4] += 1;
                q.push(adj4);
                if(adj4 >=n && adj4<=m){
                    cnt += 1;
                }
            }
        }
        return cnt;
        
    }
    int getDigits(int n){
        int cnt = 0;
        int m = n;
        while(m>0){
            m = m/10;
            cnt += 1;
        }
        return cnt;
    }
    int getMSD(int n){
        int m = n;
        while(m/10>0){
            m = m/10;
        }
        return m;
    }
    int getLSD(int n){
        return n%10;
    }
