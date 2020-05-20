namespace Gaga {

class Yeye1 {
  int fieldMember;
  void a(int b) {
    uint c;

    b= 1 + fieldMember;
    c= b+b;
  }
};

class Yeye2 : Yeye1 {
  int a;
  virtual void Yeye3.b(Yeye1 c) {
    a= c.a((int) c.fieldMember);
  }
}

}