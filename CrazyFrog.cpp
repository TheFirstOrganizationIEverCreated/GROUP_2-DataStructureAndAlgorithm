#include <iostream>

using namespace std;


class CrazyFrog
{
	public:
		static int getTotalWaysToJump(int targetedStep)
		{
			switch(targetedStep)
			{
				case 1:
					return 1;
				case 2:
					return 2;
			}
			
			return getTotalWaysToJump(targetedStep - 1) + getTotalWaysToJump(targetedStep - 2);
		}
		
		// optimizing
		// static int getTotalWaysToJump(int targetedStep)
		// {
			// int maxTotalJumps = targetedStep,
				// minTotalJumps = (targetedStep + 1) / 2;
				
		// }
};

int main()
{
	int targetedStep;
	
	while (true)
	{
		cout << "\nThe step which the frog wants to be = ";
		
		try
		{
			cin >> targetedStep;
			if(targetedStep <= 0)
			{
				throw exception();
			}
		}
		catch(...)
		{
			cout << "\nThat's invalid input, please try again." << endl;
			continue;
		}
		
		// int totalWaysToJump = CrazyFrog.getTotalWaysToJump(targetedStep);
		// cout << "\nThere're total  " << totalWaysToJump << " ways  to jump from step 0 to step " << targetedStep << endl;
		
		cout << "\nThere're total  " << CrazyFrog.getTotalWaysToJump(targetedStep) << " ways  to jump from step 0 to step " << targetedStep << endl;
		break;
	}
	
	return 0;
}
