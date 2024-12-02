using System;

namespace TheCrazyFrog
{
    internal class CrazyFrog
    {
        public static int GetTotalWaysToJump(int targetedStep)
        {
            switch (targetedStep)
            {
                case 1:
                    return 1;
                case 2:
                    return 2;
            }

            return GetTotalWaysToJump(targetedStep - 1) + GetTotalWaysToJump(targetedStep - 2);
        }

        // optimizing
        // static int GetTotalWaysToJump(int targetedStep)
        // {
        // int maxTotalJumps = targetedStep,
        // minTotalJumps = (targetedStep + 1) / 2;

        // }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            int targetedStep;

            while (true)
            {
                Console.Write("\nThe step which the frog wants to be = ");

                try
                {
                    targetedStep = int.Parse(Console.ReadLine());
                    if (targetedStep <= 0)
                    {
                        throw new Exception();
                    }
                }
                catch (Exception )
                {
                    Console.WriteLine("\nThat's invalid input, please try again.");
                    continue;
                }

                // int totalWaysToJump = CrazyFrog::GetTotalWaysToJump(targetedStep);
                // Console.WriteLine("\nThere're total  " << totalWaysToJump << " ways  to jump from step 0 to step " << targetedStep << endl;

                Console.WriteLine($"\nThere're total  {CrazyFrog.GetTotalWaysToJump(targetedStep)} ways  to jump from step 0 to step {targetedStep}");
                break;
            }

            EndProcessing();
        }

        private static void EndProcessing()
        {
            Console.WriteLine("\nInput any character on the keyboard to end the program");
            Console.ReadKey();
            Console.WriteLine("\n\n");
        }
    }
}
