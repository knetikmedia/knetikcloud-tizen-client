/*
 * SamiIntegerPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiIntegerPropertyDefinitionResource_H_
#define SamiIntegerPropertyDefinitionResource_H_

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
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiIntegerPropertyDefinitionResource: public SamiObject {
public:
    SamiIntegerPropertyDefinitionResource();
    SamiIntegerPropertyDefinitionResource(String* json);
    virtual ~SamiIntegerPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiIntegerPropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    Integer* getPMax();
    void setPMax(Integer* pMax);
    Integer* getPMin();
    void setPMin(Integer* pMin);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
Integer* pMax;
Integer* pMin;
};

} /* namespace Swagger */

#endif /* SamiIntegerPropertyDefinitionResource_H_ */
