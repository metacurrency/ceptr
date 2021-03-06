﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.IO;
using System.Text;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Serialization;

using csharp_ide.Controllers;
using csharp_ide.Models;
using csharp_ide.Views;

using Clifton.ApplicationStateManagement;
using Clifton.ExtensionMethods;
using Clifton.Tools.Data;
using Clifton.Tools.Strings.Extensions;
using Clifton.Windows.Forms.XmlTree;

using XTreeController;
using XTreeInterfaces;

namespace csharp_ide.Controllers
{
	public class StructureListController : ViewController<StructureListView>
	{
		public StructureListController()
		{
		}

		public void AddStructure(string name)
		{
			View.AddDistinctStructure(name);
		}

		/// <summary>
		/// Show, but do not update the structure ref count.
		/// </summary>
		public void ShowStructure(string name)
		{
			View.ShowDistinctStructure(name);
		}

		public void ReplaceStructure(string oldName, string newName)
		{
			View.RemoveStructure(oldName);
			View.AddDistinctStructure(newName);
		}

		public void RemoveStructure(string name)
		{
			View.RemoveStructure(name);
		}

		protected void Opening()
		{
		}

		protected void Closing()
		{
		}
	}
}