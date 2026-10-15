	class Mavic_drone_base_F
	{
		class ViewPilot;
		class ViewOptics;
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide;
			};
		};
	};
	class Mavic_3_BLU: Mavic_drone_base_F
	{
		class ViewPilot: ViewPilot
		{
			maxFov = 0.85;
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {0,1};
			opticsPPEffects[] = {};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {0,1};
			opticsPPEffects[] = {};
			maxFov = 0.85;
		};
		class PilotCamera: PilotCamera
		{
			class OpticsIn: OpticsIn
			{
				class Wide: Wide
				{
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					opticsPPEffects[] = {};
					minFov = 0.015;
					maxFov = 0.9;
				};
			};
			minTurn = -180;
			maxTurn = 180;
			minElev = -35;
			maxElev = 180;
			initElev = 0;
		};
	};
