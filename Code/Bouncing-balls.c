int bouncingBall(double h, double bounce, double window){
    int n = 0;
    if(h <= 0 || bounce <= 0 || bounce >= 1 || window >= h)
        return -1;
    while(h > window){
        n++;
        h *= bounce;
        n = h > window ? n+1 : n;
    }
    return n;
}