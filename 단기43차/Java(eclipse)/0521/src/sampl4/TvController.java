package sampl4;

public class TvController {
	private Tv tv;
	
	public TvController(Tv _tv) {
		tv = _tv;
	}

	// method
		public void poweronoff() {
		tv.poweronoff();
		 	 
	}

		public void VolumUp(){
			tv.VolumUp();
	}


	public void VolumDown() {
		tv.VolumDown();
	}

	public void ChannelUp() {
		tv.ChannelUp();
	}

	public void ChannelDown() {
		tv.ChannelDown();
		}

	public void ChannelChange(int value) {
		tv.ChannelChange(value);
	}

	public void Print() {
		tv.Print();
	}

	}

