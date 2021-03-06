/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef MgmtInvokeOperationCollectionXml_h_
#define MgmtInvokeOperationCollectionXml_h_


#include "Doc/MgmtTypesDoc/CMgmtInvokeOperationCollectionDoc.h"

#include "Doc/DocXml/MgmtTypesXml/MgmtTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the MgmtInvokeOperationCollection class to/from XML
	namespace MgmtInvokeOperationCollectionXml {

		/// Adds the MgmtInvokeOperationCollectionDoc into the XML.
		void MGMTTYPESXML_LINKAGE add(
			const SmartPtrCMgmtInvokeOperationCollectionDoc mgmtInvokeOperationCollectionDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the MgmtInvokeOperationCollectionDoc from the XML.
		SmartPtrCMgmtInvokeOperationCollectionDoc MGMTTYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
