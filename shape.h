#ifndef SHAPE_H
#define SHAPE_H

typedef struct S2d {
    double x ;
    double y ;
}S2d;

class Segment{
    public:
    S2d base;
    S2d extr;
    double angle;
    double longueur;
    int index;
    Segment();
    double ecartAngulaire(const Segment& ) const;
    bool intersection(const Segment&, const Segment&);
    double orientation(const S2d& ) const;
    bool isOnSegment(const S2d& q) const ;
    int isAligned(const S2d& p, const S2d& q) const ;
    friend bool doIntersection(const Segment&, const Segment&);
    void test_segment_superposition(const Segment& , int );
};

void test_segment_collision(const Segment&, const Segment&, int, int);


#endif