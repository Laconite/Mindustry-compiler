void Draw_0()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 10
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 10
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_1()
{
	__asm
	{
		draw rect x y 10 2
		op add draw_x x 4
		op add draw_y y 2
		draw rect draw_x draw_y 2 12
		op add draw_x x 2
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_2()
{
	__asm
	{
		draw rect x y 10 2
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_y y 10
		draw rect x draw_y 2 2
	}

	x += 12;
}
void Draw_3()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_y y 10
		draw rect x draw_y 2 2
	}

	x += 12;
}
void Draw_4()
{
	__asm
	{
		op add draw_x x 8
		draw rect draw_x y 2 14
		op add draw_y y 4
		draw rect x draw_y 8 2
		op add draw_y y 6
		draw rect x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 12
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_5()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 6
		op add draw_y y 8
		draw rect x draw_y 8 2
		op add draw_y y 10
		draw rect x draw_y 2 2
		op add draw_y y 12
		draw rect x draw_y 10 2
	}

	x += 12;
}
void Draw_6()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_y y 2
		draw rect x draw_y 2 8
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 12
		draw rect draw_x draw_y 4 2
	}

	x += 12;
}
void Draw_7()
{
	__asm
	{
		op add draw_x x 4
		draw rect draw_x y 2 6
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_y y 12
		draw rect x draw_y 10 2
	}

	x += 12;
}
void Draw_8()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_y y 2
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_y y 8
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_9()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 4 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 4
		draw rect draw_x draw_y 2 8
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_y y 8
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}

void Draw_A()
{
	__asm
	{
		draw rect x y 2 12
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 12
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_B()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 12;
}
void Draw_C()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_y y 2
		draw rect x draw_y 2 10
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_D()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 10
	}

	x += 12;
}
void Draw_E()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 4 2
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 10;
}
void Draw_F()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
	}

	x += 10;
}
void Draw_G()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 10
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 6
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 8 2
	}

	x += 12;
}
void Draw_H()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 14
	}

	x += 12;
}
void Draw_I()
{
	__asm
	{
		draw rect x y 6 2
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 10
		op add draw_y y 12
		draw rect x draw_y 6 2
	}

	x += 8;
}
void Draw_J()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 12
	}

	x += 12;
}
void Draw_K()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 6
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 12
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 6
	}

	x += 12;
}
void Draw_L()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 10;
}
void Draw_M()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 14
	}

	x += 12;
}
void Draw_N()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 14
	}

	x += 12;
}
void Draw_O()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 10
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 10
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 12;
}
void Draw_P()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_Q()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 4 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 4
		draw rect draw_x draw_y 2 8
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_y y 2
		draw rect x draw_y 2 10
		op add draw_x x 8
		draw rect draw_x y 2 2
	}

	x += 12;
}
void Draw_R()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_x x 4
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 2
	}

	x += 12;
}
void Draw_S()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 6 2
		op add draw_y y 8
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 12
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_T()
{
	__asm
	{
		op add draw_x x 4
		draw rect draw_x y 2 12
		op add draw_y y 12
		draw rect x draw_y 10 2
	}

	x += 12;
}
void Draw_U()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 12
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 12
	}

	x += 12;
}
void Draw_V()
{
	__asm
	{
		op add draw_x x 4
		draw rect draw_x y 2 2
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_y y 6
		draw rect x draw_y 2 8
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
		op add draw_x x 8
		op add draw_y y 6
		draw rect draw_x draw_y 2 8
	}

	x += 12;
}
void Draw_W()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 14
	}

	x += 12;
}
void Draw_X()
{
	__asm
	{
		draw rect x y 2 4
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 10
		draw rect draw_x draw_y 2 4
		op add draw_y y 10
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 4
	}

	x += 12;
}
void Draw_Y()
{
	__asm
	{
		op add draw_x x 4
		draw rect draw_x y 2 10
		op add draw_x x 6
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 12
		draw rect draw_x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_y y 12
		draw rect x draw_y 2 2
	}

	x += 12;
}
void Draw_Z()
{
	__asm
	{
		draw rect x y 10 2
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 10
		draw rect draw_x draw_y 2 2
		op add draw_y y 12
		draw rect x draw_y 10 2
	}

	x += 12;
}

void Draw_a()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 8
		op add draw_y y 2
		draw rect x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_b()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 6
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 12;
}
void Draw_c()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 6
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 10;
}
void Draw_d()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 6
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 14
	}

	x += 12;
}
void Draw_e()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 8 2
		op add draw_y y 2
		draw rect x draw_y 2 6
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 8 2
		op add draw_x x 8
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_f()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 2 12
		op add draw_x x 4
		op add draw_y y 12
		draw rect draw_x draw_y 4 2
		op add draw_y y 8
		draw rect x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
	}

	x += 10;
}
void Draw_g()
{
	__asm
	{
		op add draw_y y -2
		draw rect x draw_y 8 2
		op add draw_x x 8
		draw rect draw_x y 2 10
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
		op add draw_y y 4
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_h()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		draw rect draw_x y 2 8
	}

	x += 12;
}
void Draw_i()
{
	__asm
	{
		draw rect x y 2 10
		op add draw_y y 12
		draw rect x draw_y 2 2
	}

	x += 4;
}
void Draw_j()
{
	__asm
	{
		draw rect x y 2 2
		op add draw_x x 2
		op add draw_y y - 2
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 10
		op add draw_x x 8
		op add draw_y y 12
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_k()
{
	__asm
	{
		draw rect x y 2 14
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		draw rect draw_x y 2 2
	}

	x += 10;
}
void Draw_l()
{
	__asm
	{
		op add draw_x x 2
		draw rect draw_x y 2 2
		op add draw_y y 2
		draw rect x draw_y 2 12
	}

	x += 6;
}
void Draw_m()
{
	__asm
	{
		draw rect x y 2 10
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 4
		draw rect draw_x draw_y 2 4
		op add draw_x x 6
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 8
	}

	x += 12;
}
void Draw_n()
{
	__asm
	{
		draw rect x y 2 10
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 8
	}

	x += 12;
}
void Draw_o()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 6
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 6 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 6
		op add draw_x x 2
		draw rect draw_x y 6 2
	}

	x += 12;
}
void Draw_p()
{
	__asm
	{
		op add draw_y y - 2
		draw rect x draw_y 2 12
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		op add draw_y y 4
		draw rect draw_x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 6 2
	}

	x += 12;
}
void Draw_q()
{
	__asm
	{
		op add draw_y y 4
		draw rect x draw_y 2 4
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 6 2
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y - 2
		draw rect draw_x draw_y 2 12
	}

	x += 12;
}
void Draw_r()
{
	__asm
	{
		draw rect x y 2 10
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 4 2
		op add draw_x x 8
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
	}

	x += 12;
}
void Draw_s()
{
	__asm
	{
		draw rect x y 8 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 4
		draw rect draw_x draw_y 6 2
		op add draw_y y 6
		draw rect x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 8
		draw rect draw_x draw_y 8 2
	}

	x += 12;
}
void Draw_t()
{
	__asm
	{
		op add draw_x x 4
		draw rect draw_x y 2 2
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 12
		op add draw_y y 8
		draw rect x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
	}

	x += 8;
}
void Draw_u()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 8
		op add draw_x x 2
		draw rect draw_x y 6 2
		op add draw_x x 8
		draw rect draw_x y 2 10
	}

	x += 12;
}
void Draw_v()
{
	__asm
	{
		op add draw_y y 4
		draw rect x draw_y 2 6
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		draw rect draw_x y 2 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 4
		draw rect draw_x draw_y 2 6
	}

	x += 12;
}
void Draw_w()
{
	__asm
	{
		op add draw_y y 2
		draw rect x draw_y 2 8
		op add draw_x x 2
		draw rect draw_x y 8 2
		op add draw_x x 8
		op add draw_y y 2
		draw rect draw_x draw_y 2 8
		op add draw_x x 4
		op add draw_y y 2
		draw rect draw_x draw_y 2 4
	}

	x += 12;
}
void Draw_x()
{
	__asm
	{
		draw rect x y 2 2
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		op add draw_y y 8
		draw rect draw_x draw_y 2 2
		op add draw_x x 8
		draw rect draw_x y 2 2
		op add draw_x x 6
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 2
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_y y 8
		draw rect x draw_y 2 2
	}

	x += 12;
}
void Draw_y()
{
	__asm
	{
		op add draw_y y -2
		draw rect x draw_y 8 2
		op add draw_x x 8
		draw rect draw_x y 2 10
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 6 2
		op add draw_y y 4
		draw rect x draw_y 2 6
	}

	x += 12;
}
void Draw_z()
{
	__asm
	{
		draw rect x y 10 2
		op add draw_x x 2
		op add draw_y y 2
		draw rect draw_x draw_y 2 2
		op add draw_x x 4
		op add draw_y y 4
		draw rect draw_x draw_y 2 2
		op add draw_x x 6
		op add draw_y y 6
		draw rect draw_x draw_y 2 2
		op add draw_y y 8
		draw rect x draw_y 10 2
	}

	x += 12;
}