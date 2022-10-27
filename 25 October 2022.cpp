class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<pair<int, int>> q;

        vector<int> res;

        q.push_back(make_pair(arr[0], 0));

        for (int i = 1; i < k; i++) {

            while(q.size() > 0 && q.back().first < arr[i])

                q.pop_back();

            q.push_back(make_pair(arr[i], i));

        }

        res.push_back(q.front().first);

        for (int i = k; i < n; i++) {

            // for (pair<int, int> x : q)

            //     cout << x.first << " ";

            // cout << endl;

            while(q.size() > 0 && q.back().first < arr[i])

                q.pop_back();

            while(q.size() > 0 && i - q.front().second >= k)

                q.pop_front();

            q.push_back(make_pair(arr[i], i));

            res.push_back(q.front().first);

        }

        return res;
    }
};
