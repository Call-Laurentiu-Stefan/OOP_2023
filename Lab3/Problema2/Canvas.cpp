#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			canvas[i][j] = ' ';
		}
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int xc = ray;
	int yc = 0;
	int err = 0;
	while (xc >= yc)
	{
		canvas[x - xc][y - yc] = ch;
		canvas[x + yc][y - xc] = ch;
		canvas[x + xc][y + yc] = ch;
		canvas[x + yc][y + xc] = ch;
		canvas[x - yc][y + xc] = ch;
		canvas[x - xc][y + yc] = ch;
		canvas[x - yc][y - xc] = ch;
		canvas[x + xc][y - yc] = ch;
		if (err <= 0)
		{
			yc += 1;
			err += 2 * yc + 1;
		}
		if (err > 0)
		{
			xc -= 1;
			err -= 2 * xc + 1;
		}
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int xc = ray;
	int yc = 0;
	int err = 0;
	while (xc >= yc)
	{
		DrawLine(x - xc, y + yc, x + xc, y + yc,ch);
		DrawLine(x - xc, y - yc, x + xc, y - yc,ch);
		DrawLine(x - yc, y - xc , x + yc , y - xc,ch);
		DrawLine(x - yc, y + xc, x + yc, y + xc,ch);
		Print();
		if (err <= 0)
		{
			yc += 1;
			err += 2 * yc + 1;
		}
		if (err > 0)
		{
			xc -= 1;
			err -= 2 * xc + 1;
		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++) {
		SetPoint(top, i, ch);
		SetPoint(bottom, i, ch);
	}
	Print();
	for (int j = top; j <= bottom; j++) {
		SetPoint(j, left, ch);
		SetPoint(j, right, ch);
	}
	Print();
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left + 1; i <= right - 1; i++) {
		for (int j = top + 1; j <= bottom - 1; j++) {
			SetPoint(j, i, ch);
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int dy = -abs(y2 - y1);
	int sx = (x1 < x2) ? 1 : -1;
	int sy = (y1 < y2) ? 1 : -1;

	int err = dx + dy;

	while (true) {
		SetPoint(x1, y1, ch);
		if (x1 == x2 && y1 == y2) {
			break;
		}
		int e2 = 2 * err;
		if (e2 >= dy) {
			if (x1 == x2) {
				break;
			}
			err += dy;
			x1 += sx;
		}
		if (e2 <= dx) {
			if (y1 == y2) {
				break;
			}
			err += dx;
			y1 += sy;
		}
	}
}

void Canvas::Print()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			std::cout << canvas[i][j] << " ";
		}
		std::cout << "\n";
	}

}

void Canvas::Clear()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			canvas[i][j] = ' ';
		}
	}
}
