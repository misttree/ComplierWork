import re

relop = ["==", ">", "<", ">=", "<="]
op = ["+", "-", "*", "/"]
table = ["Label", "GOTO", "CALL", "ARG", "FUNCTION", "PARAM", "RETURN"]

if __name__ == "__main__":
    group = []
    with open("Four_dollar.txt", 'r') as f:
        for index, line in enumerate(f):
            if index < 3:
                continue
            elements = []
            elements_temp = re.split("\s", line)
            flag = True
            for element in elements_temp:
                if element:
                    if flag:
                        elements.append(element)
                    elif element:
                        elements[-1] = elements[-1] + " " + element
                        flag = True
                if element in table:
                    flag = False
            group.append(elements)

    inner = []
    flag = False
    for index, line in enumerate(group):
        if flag:
            flag = False
            continue
        if len(line) == 5:
            if line[1] in relop:
                inner.append(f"IF {line[2]}[{line[1]}]{line[3]} {line[4]}")
            elif line[1] is "=" and line[3] == "NULL":
                inner.append(f"{line[4]} := {line[2]}")
            elif line[1] in op:
                inner.append(
                    f"{group[index+1][4]} := {line[2]} {line[1]} {line[3]}")
                flag = True
            else:
                inner.append(line)
        elif len(line) == 1:
            inner.append(line[0])
        elif len(line) == 3:
            inner.append(f"{line[2]} := {line[1]}")
        else:
            inner.append(line)
    for line in inner:
        print(line)

    with open("inter.txt", "w") as f:
        for line in inner:
            f.writelines(f"{line}\n")
