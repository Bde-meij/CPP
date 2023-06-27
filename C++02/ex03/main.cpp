#include "Point.hpp"

int main()
{
	Point pointPoint(753753, 7856);
	Point pointA(.1, 45773);
	Point pointB(7378, .1);
	Point pointC(456, 465);

	std::cout << std::endl << "expected NO" << std::endl;
	if (pointPoint.bsp(pointA, pointB, pointC, pointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
		
	Point ApointPoint(457, 466);
	Point ApointA(.1, 45773);
	Point ApointB(7378, .1);
	Point ApointC(456, 465);

	std::cout << std::endl << "expected YES" << std::endl;
	if (pointPoint.bsp(ApointA, ApointB, ApointC, ApointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
		
	Point BpointPoint(-5, -2.9);
	Point BpointA(-2, -2);
	Point BpointB(-3, -3);
	Point BpointC(-4, -2);

	std::cout << std::endl << "expected NO" << std::endl;
	if (pointPoint.bsp(BpointA, BpointB, BpointC, BpointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
		
	Point CpointPoint(5, 2.9);
	Point CpointA(2, 2);
	Point CpointB(3, 3);
	Point CpointC(4, 2);
	std::cout << std::endl << "expected NO" << std::endl;
	if (pointPoint.bsp(CpointA, CpointB, CpointC, CpointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	Point DpointPoint(-2.5, -2.5);
	Point DpointA(-2, -2);
	Point DpointB(-3, -3);
	Point DpointC(-4, -2);
	std::cout << std::endl << "expected YES" << std::endl;
	if (pointPoint.bsp(DpointA, DpointB, DpointC, DpointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	Point EpointPoint(2.5, 2.5);
	Point EpointA(2, 2);
	Point EpointB(3, 3);
	Point EpointC(4, 2);
	std::cout << std::endl << "expected YES" << std::endl;
	if (pointPoint.bsp(EpointA, EpointB, EpointC, EpointPoint))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

}
