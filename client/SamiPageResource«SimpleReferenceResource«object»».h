/*
 * SamiPageResource«SimpleReferenceResource«object»».h
 * 
 * 
 */

#ifndef SamiPageResource«SimpleReferenceResource«object»»_H_
#define SamiPageResource«SimpleReferenceResource«object»»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiOrder.h"
#include "SamiSimpleReferenceResource«object».h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;


namespace Swagger {

class SamiPageResource«SimpleReferenceResource«object»»: public SamiObject {
public:
    SamiPageResource«SimpleReferenceResource«object»»();
    SamiPageResource«SimpleReferenceResource«object»»(String* json);
    virtual ~SamiPageResource«SimpleReferenceResource«object»»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPageResource«SimpleReferenceResource«object»»* fromJson(String* obj);

    IList* getPContent();
    void setPContent(IList* pContent);
    Boolean* getPFirst();
    void setPFirst(Boolean* pFirst);
    Boolean* getPLast();
    void setPLast(Boolean* pLast);
    Integer* getPNumber();
    void setPNumber(Integer* pNumber);
    Integer* getPNumberOfElements();
    void setPNumberOfElements(Integer* pNumber_of_elements);
    Integer* getPSize();
    void setPSize(Integer* pSize);
    IList* getPSort();
    void setPSort(IList* pSort);
    Long* getPTotalElements();
    void setPTotalElements(Long* pTotal_elements);
    Integer* getPTotalPages();
    void setPTotalPages(Integer* pTotal_pages);

private:
    IList* pContent;
Boolean* pFirst;
Boolean* pLast;
Integer* pNumber;
Integer* pNumber_of_elements;
Integer* pSize;
IList* pSort;
Long* pTotal_elements;
Integer* pTotal_pages;
};

} /* namespace Swagger */

#endif /* SamiPageResource«SimpleReferenceResource«object»»_H_ */
