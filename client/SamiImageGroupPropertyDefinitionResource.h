/*
 * SamiImageGroupPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiImageGroupPropertyDefinitionResource_H_
#define SamiImageGroupPropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileGroupPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiImageGroupPropertyDefinitionResource: public SamiObject {
public:
    SamiImageGroupPropertyDefinitionResource();
    SamiImageGroupPropertyDefinitionResource(String* json);
    virtual ~SamiImageGroupPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiImageGroupPropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    String* getPFileType();
    void setPFileType(String* pFile_type);
    Integer* getPMaxCount();
    void setPMaxCount(Integer* pMax_count);
    Long* getPMaxFileSize();
    void setPMaxFileSize(Long* pMax_file_size);
    Integer* getPMinCount();
    void setPMinCount(Integer* pMin_count);
    Integer* getPMaxHeight();
    void setPMaxHeight(Integer* pMax_height);
    Integer* getPMaxWidth();
    void setPMaxWidth(Integer* pMax_width);
    Integer* getPMinHeight();
    void setPMinHeight(Integer* pMin_height);
    Integer* getPMinWidth();
    void setPMinWidth(Integer* pMin_width);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
String* pFile_type;
Integer* pMax_count;
Long* pMax_file_size;
Integer* pMin_count;
Integer* pMax_height;
Integer* pMax_width;
Integer* pMin_height;
Integer* pMin_width;
};

} /* namespace Swagger */

#endif /* SamiImageGroupPropertyDefinitionResource_H_ */
