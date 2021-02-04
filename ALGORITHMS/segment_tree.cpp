//************* Segment tree : with & without lazy ***************

//the max length of segment tree is 2x(nearest power of 2 near n) - 1
int len = pow(2,(int)(ceil(sqrt(n))) + 1) - 1;
//--------------------------------------------------
int node[200005];
void build(int now, int lo, int hi){
    if(lo == hi){
        node[now] = ar[lo];
        return;
    }
    int mid = (lo + hi) / 2;

    build(now * 2, lo, mid);
    build((now * 2) + 1, mid + 1, hi);

    node[now] = node[now * 2] + node[(now * 2) + 1];
}

void update(int now, int lo, int hi, int idx, int val){
    if(lo == hi){
        node[now] = val;
        ar[idx] = val;
        return;
    }    
    int mid  = (lo + hi) / 2;
    if(idx <= mid) update(now * 2, lo, mid, idx, val);
    else if(idx > mid) update((now * 2) + 1, mid + 1, hi, idx, val);
    
    node[now] = node[now * 2] + node[(now * 2) + 1];
}

int query(int now, int lo, int hi, int l, int r){
    if(lo == l && hi == r){
        return node[now];
    }
    int mid = (lo + hi) / 2;
    if(r <= mid) return query(now * 2, lo, mid, l, r);
    else if(l > mid) return query((now * 2) + 1, mid + 1, hi, l, r);
    else{ 
        int x = query(now * 2, lo, mid, l, mid);
        int y = query((now * 2) + 1, mid + 1, hi, mid + 1, r);
        return x + y;
    }
}


//Segment tree lazy update
void propagate(int now, int l, int r){
    if(l != r){
        node[now] += (lazy[now] * (r-l+1));
        lazy[now*2] += lazy[now];
        lazy[(now*2)+1] += lazy[now];
        lazy[now] = 0;
    }
    else{
        if(lazy[now]){
            node[now] += lazy[now];
            lazy[now] = 0;
        }
    }
}

void update(int now, int lo, int hi, int l, int r){
    propagate(now, lo, hi);

    if(lo==l && hi==r){
        node[now] += (hi-lo+1);
        lazy[now*2]++; lazy[(now*2)+1]++;
        return;
    }

    int mid = (lo+hi)/2;
    if(r <= mid){
        update(now*2, lo, mid, l, r);
        propagate((now*2)+1, mid+1, hi);
    }
    else if(l > mid){
        update((now*2)+1, mid+1, hi, l, r);
        propagate(now*2, lo, mid);
    }
    else{
        update(now*2, lo, mid, l, mid);
        update((now*2)+1, mid+1, hi, mid+1, r);
    }

    node[now] = node[now*2] + node[(now*2)+1];
}