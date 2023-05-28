#include <cmath>
#include <cstdint>
#include <iostream>
#include <ostream>

#include <ableton/link/Beats.hpp>
#include <ableton/link/Phase.hpp>

std::ostream& operator<<(std::ostream &os, ableton::link::Beats const& b)
{
  return os << b.floating();
}


int main()
{
  ableton::link::Beats const quantum{4.0};
  ableton::link::Beats beats;

  for (int i=0; i < 10; ++i) {
    std::cout 
      << " beats = " << beats
      << " phase = " << ableton::link::phase(beats, quantum)
      << " next  = " << ableton::link::nextPhaseMatch(beats, ableton::link::Beats{3.}, quantum)
      << " close = " << ableton::link::closestPhaseMatch(beats, ableton::link::Beats{3.}, quantum)
      << std::endl;
    beats = beats + ableton::link::Beats(1.0);
  }
}