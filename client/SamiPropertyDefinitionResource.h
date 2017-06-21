/*
 * SamiPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiPropertyDefinitionResource_H_
#define SamiPropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiPropertyDefinitionResource: public SamiObject {
public:
    SamiPropertyDefinitionResource();
    SamiPropertyDefinitionResource(String* json);
    virtual ~SamiPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiPropertyDefinitionResource_H_ */
