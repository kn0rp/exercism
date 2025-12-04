#pragma once

namespace space_age {

// TODO: add your solution here

class space_age {
public:
  space_age(double seconds) : elapsed_seconds(seconds) {};
  double seconds() const { return this->elapsed_seconds; }
  double on_earth() const { return this->elapsed_seconds / 31557600.0; }
  double on_mercury() const { return (this->on_earth()) * (1.0 / 0.2408467); }
  double on_venus() const { return (this->on_earth()) * (1.0 / 0.61519726); }
  double on_mars() const { return (this->on_earth()) * (1.0 / 1.8808158); }
  double on_jupiter() const { return (this->on_earth()) * (1.0 / 11.862615); }
  double on_saturn() const { return (this->on_earth()) * (1.0 / 29.447498); }
  double on_uranus() const { return (this->on_earth()) * (1.0 / 84.016846); }
  double on_neptune() const { return (this->on_earth()) * (1.0 / 164.79132); }

private:
  double elapsed_seconds;
};

} // namespace space_age
