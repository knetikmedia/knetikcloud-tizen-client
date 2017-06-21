/*
 * SamiFormattedTextPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiFormattedTextPropertyDefinitionResource_H_
#define SamiFormattedTextPropertyDefinitionResource_H_

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

class SamiFormattedTextPropertyDefinitionResource: public SamiObject {
public:
    SamiFormattedTextPropertyDefinitionResource();
    SamiFormattedTextPropertyDefinitionResource(String* json);
    virtual ~SamiFormattedTextPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFormattedTextPropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    Integer* getPMaxLength();
    void setPMaxLength(Integer* pMax_length);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
Integer* pMax_length;
};

} /* namespace Swagger */

#endif /* SamiFormattedTextPropertyDefinitionResource_H_ */
