#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;


	/// <summary>
	/// CubeBuilder used for creating cubes with sid of x.
	/// </summary>
	class AUTOMATIONBINDING_API CubeBuilder : public IBuilder
	{
	public:
		enum CubeBuilderTypes
		{
			TypesOption1, /** First mode of execution */
			TypesOption2 /**Second mode of execution.*/
		};

		void SetType(CubeBuilderTypes type);
		CubeBuilderTypes GetType();

		void SetEdges(int x); /** Setting edges of cube */
		void GetEdges(int& x); /** Getting edges of cube */
		int Volume(int x); /** Getting volume of cube */


		CADObject* Commit() override;
	private:


	};
}
