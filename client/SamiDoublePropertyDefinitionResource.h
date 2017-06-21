/*
 * SamiDoublePropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiDoublePropertyDefinitionResource_H_
#define SamiDoublePropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiDoublePropertyDefinitionResource: public SamiObject {
public:
    SamiDoublePropertyDefinitionResource();
    SamiDoublePropertyDefinitionResource(String* json);
    virtual ~SamiDoublePropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDoublePropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    Double* getPMax();
    void setPMax(Double* pMax);
    Double* getPMin();
    void setPMin(Double* pMin);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
Double* pMax;
Double* pMin;
};

} /* namespace Swagger */

#endif /* SamiDoublePropertyDefinitionResource_H_ */
