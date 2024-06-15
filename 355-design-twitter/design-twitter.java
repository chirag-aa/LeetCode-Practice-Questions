class PostTweetTracker implements Comparable<PostTweetTracker> {
   int userId;
   int tweetId;
   int timeStamp;

   public PostTweetTracker(int userId,int tweetId,int timeStamp){
    this.userId = userId;
    this.tweetId = tweetId;
    this.timeStamp = timeStamp;
   }
   
   public int compareTo(PostTweetTracker pt){
    return this.timeStamp - pt.timeStamp;
   }
}
class Twitter {
    Map<Integer,Set<Integer>>mpp;
    PriorityQueue<PostTweetTracker>pq;
    int count;
    public Twitter() {
        count = 0;
        mpp = new HashMap<>();
        pq = new PriorityQueue<>(Collections.reverseOrder());
    }
    
    public void postTweet(int userId, int tweetId) {
        count++;
        PostTweetTracker postTracker = new PostTweetTracker(userId,tweetId,count);
        pq.add(postTracker);
    }
    
    public List<Integer> getNewsFeed(int userId) {
        List<Integer>ans = new ArrayList<>();
        Queue<PostTweetTracker>q1 = new PriorityQueue<>();

        while(!pq.isEmpty() && ans.size()<10){
          PostTweetTracker postTracker = pq.peek();
          pq.poll();
          q1.add(postTracker);
          Set<Integer>s1 = mpp.get(userId);
          if(postTracker.userId == userId || (s1!=null && s1.contains(postTracker.userId))){
            ans.add(postTracker.tweetId);
          }
        }
        while(!q1.isEmpty()){
            pq.add(q1.peek());
            q1.poll();
        }
        return ans;
    }
    
    public void follow(int followerId, int followeeId) {
        Set<Integer>s1 = mpp.get(followerId);
        if(s1==null){
            s1 = new HashSet<>();
        }
        s1.add(followeeId);
        mpp.put(followerId,s1);
        return;
    }
    
    public void unfollow(int followerId, int followeeId) {
        Set<Integer>s1 = mpp.get(followerId);
         if(s1==null){
            s1 = new HashSet<>();
        }
        s1.remove(followeeId);
        mpp.put(followerId,s1);
        return;
    }
}

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * List<Integer> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */