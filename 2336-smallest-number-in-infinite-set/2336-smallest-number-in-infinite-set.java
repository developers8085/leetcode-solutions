class SmallestInfiniteSet {
    PriorityQueue<Integer> pq = new PriorityQueue<Integer>((a,b)-> a-b);
    Set<Integer> set = new HashSet<Integer>();
    public SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            set.add(i);
            pq.add(i);
        }
    }
    
    public int popSmallest() {
        set.remove(pq.peek());
        return pq.poll();
    }
    
    public void addBack(int num) {
        if(!set.contains(num)){
            set.add(num);
            pq.add(num);
        }
    }
}