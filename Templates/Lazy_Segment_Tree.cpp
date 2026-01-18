// https://github.com/Priyansh19077/CP-Templates/blob/master/Range%20Queries/Lazy_SGT.cpp

template <typename Node, typename Update>
struct LazySGT
{
    vector<Node> tree;
    vector<bool> lazy;
    vector<Update> updates;
    vector<ll> arr; // type may change ♻️
    int n;
    int s;
    LazySGT(vector<ll> &a, int a_len)
    { // change if type updated
        arr = a;
        n = a_len;
        s = 1;
        while (s < 2 * n)
        {
            s = s << 1;
        }
        tree.resize(s);
        fill(all(tree), Node());
        lazy.resize(s);
        fill(all(lazy), false);
        updates.resize(s);
        fill(all(updates), Update());
        build(0, n - 1, 1);
    }
    void build(int start, int end, int index)
    { // Never change this
        if (start == end)
        {
            tree[index] = Node(arr[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * index);
        build(mid + 1, end, 2 * index + 1);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    void pushdown(int index, int start, int end) // pushdown lazy updates to children
    {
        if (lazy[index])
        {
            int mid = (start + end) / 2;
            apply(2 * index, start, mid, updates[index]);
            apply(2 * index + 1, mid + 1, end, updates[index]);
            updates[index] = Update(); // reset to identity
            lazy[index] = 0;           // reset lazy flag
        }
    }
    void apply(int index, int start, int end, Update &u)
    {
        if (start != end)
        {
            lazy[index] = 1;
            updates[index].combine(u, start, end); // combine updates
        }
        u.apply(tree[index], start, end);
    }
    void update(int start, int end, int index, int left, int right, Update &u)
    { // Never Change this
        if (start > right || end < left)
            return;
        if (start >= left && end <= right)
        {
            apply(index, start, end, u);
            return;
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        update(start, mid, 2 * index, left, right, u);
        update(mid + 1, end, 2 * index + 1, left, right, u);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    Node query(int start, int end, int index, int left, int right)
    { // Never change this
        if (start > right || end < left)
            return Node();
        if (start >= left && end <= right)
        {
            pushdown(index, start, end);
            return tree[index];
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        Node l, r, ans;
        l = query(start, mid, 2 * index, left, right);
        r = query(mid + 1, end, 2 * index + 1, left, right);
        ans.merge(l, r);
        return ans;
    }
    void make_update(int left, int right, ll val)
    {                                    // pass in as many parameters as required
        Update new_update = Update(val); // may change ♻️
        update(0, n - 1, 1, left, right, new_update);
    }
    Node make_query(int left, int right)
    {
        return query(0, n - 1, 1, left, right);
    }
};

struct Node1
{
    ll val; // may change ♻️
    Node1()
    {            // Identity element
        val = 0; // may change ♻️
    }
    Node1(ll p1)
    {             // Actual Node
        val = p1; // may change ♻️
    }
    void merge(Node1 &l, Node1 &r) // Merge two child nodes to a parent node
    {
        val = l.val + r.val; // may change ♻️
    }
};

struct Update1
{
    ll val; // may change ♻️
    Update1()
    { // Identity update
        val = 0;
    }
    Update1(ll val1)
    { // Actual Update
        val = val1;
    }
    void apply(Node1 &a, int start, int end)
    {                                    // apply update to given node in the 'real' segment tree
        a.val = val * (end - start + 1); // may change ♻️: currently we're doing => (val_to_set * total_nodes)
    }
    void combine(Update1 &new_update, int start, int end) // how to combine two updates in the 'updates' segment tree
    {
        val = new_update.val; // may change ♻️
    }
};
