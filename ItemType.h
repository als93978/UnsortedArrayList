#ifndef ITEMTYPE_H
#define ITEMTYPE_H

using namespace std;

enum RelationType { LESS, EQUAL, GREATER };

class ItemType {
public:
    ItemType();
    RelationType comparedTo(ItemType item) const;
    
    

private:
    int value;
};

#endif
