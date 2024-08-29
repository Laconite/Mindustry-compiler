void FPS()
{
	__asm
	{
		op sub fps @time last_time_fps
		set last_time_fps @time
		op div fps 1000 fps
		op add medium_fps medium_fps fps
		op idiv medium_fps medium_fps 2

		print "FPS: "
		print medium_fps
		printflush message1
	}
}