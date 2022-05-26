//TODO watch CodeWithHarry C++ #44 Virtual Base Class

/*
     ---- GrandFather ---
     |                  |
     V                  V
   Child1             Child2
     |                  |
     |                  |
     ---> GrandChild <---

If we were to have HIERARCHIAL inheritance from GrandFather to Child1 and Child2 in the regular way,
and then MULTIPLE inheritance from Child1 and Child2 to GrandChild,

When we would try to access the data member 'a' from GrandChild, first of all there would be a problem
of ambiguity in the NAME LOOKUP process.

And even if hypothetically the name lookup worked out, there would be a problem of inconsistency
in the value of the data member.

! To solve this problem, we use the 'virtual' keyword when creating sub-classes of 'GrandFather'
! to ensure that only one version of the values of the data members of GrandFather are maintained.
*/

class GrandFather {
  public:
    int a;  
};

class Child1 : virtual public GrandFather {

};

class Child2 : virtual public GrandFather {

};

class GrandChild : public Child1, public Child2 {

};