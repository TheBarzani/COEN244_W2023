// Not working code just demo!!

class Baz{
    int ID;
    int val;
};

class Bar
{
    public:
    Baz baz;
};

//ASSOCIATION (with Bar)
class Foo
{
    Bar* bar;
    void setBar(Bar* _bar)
    {
        bar = _bar;
    }
};

//AGGREGATION (with Bar)
class Foo
{
    Bar* bar;
    void setBar(Bar* _bar)
    {
        bar = new Bar;
        bar->baz = _bar->baz;
    }
};


//COMPOSTION (with Bar)
class Foo
{
    Bar bar;
    Foo(Baz baz)
    {
        bar.baz = baz;
    }
};