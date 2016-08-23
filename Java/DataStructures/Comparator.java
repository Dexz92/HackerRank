class Checker implements Comparator{
    
    public int compare(Object obj1, Object obj2){
        Player p1 = (Player)obj1;
        Player p2 = (Player)obj2;
        
        if(p1.score == p2.score){
            return p1.name.compareTo(p2.name);
        }else if(p1.score > p2.score){
            return -1;
        }else{
            return 1;
        }
    }
}
