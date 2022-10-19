class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        Map<String,Integer> mp = new HashMap<>();
        for(int i=0;i<words.length;i++){
            mp.put(words[i], mp.getOrDefault(words[i], 0) + 1);
        }
        PriorityQueue<Map.Entry<String, Integer>> pq = new PriorityQueue<Map.Entry<String, Integer>>((o1,o2)->{
            if(o1.getValue() != o2.getValue()){
                return o1.getValue().compareTo(o2.getValue());
            }
            return -o1.getKey().compareTo(o2.getKey());
        });
        mp.entrySet().forEach(e -> {
            pq.offer(e);
            if(pq.size() > k)
                pq.poll();
        });
        List<String> ans = new ArrayList<String>();
        while(!pq.isEmpty()){
            ans.add(pq.poll().getKey());

        }
        Collections.reverse(ans);
        return ans;
    }
}