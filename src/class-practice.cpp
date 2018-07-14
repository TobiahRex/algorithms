using namespace std;

class Rectangle {
  public:
    Rectangle() = default;

    Rectangle(double width, double height)
      : width_{width}, height_{height}
    {}

    double Width()  const  {
      return width_;
    }

    double Height() const {
      return height_;
    }

    double Area() const {
      return width_ * height_;
    }

    double Perimeter const {
      return 2.0 * (width_ + height_);
    }

    void Scale(double scaleFactor) {
      width_ *= scaleFactor;
      height_ *= scaleFactor;
    }

  private:
    double width_{};
    double height_{};
};
