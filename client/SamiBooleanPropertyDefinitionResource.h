/*
 * SamiBooleanPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiBooleanPropertyDefinitionResource_H_
#define SamiBooleanPropertyDefinitionResource_H_

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
using Tizen::Base::String;


namespace Swagger {

class SamiBooleanPropertyDefinitionResource: public SamiObject {
public:
    SamiBooleanPropertyDefinitionResource();
    SamiBooleanPropertyDefinitionResource(String* json);
    virtual ~SamiBooleanPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBooleanPropertyDefinitionResource* fromJson(String* obj);

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

#endif /* SamiBooleanPropertyDefinitionResource_H_ */
